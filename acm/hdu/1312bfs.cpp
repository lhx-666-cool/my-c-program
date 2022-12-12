#include<cstdio>
#include<queue>
using namespace std;
char room[30][30] = { 0 };
int step[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
typedef struct point
{
    int x = 0;
    int y = 0;
}point;
int bfs(int px, int py, int x, int y) {
    queue<point>myque;
    point people;
    int count = 0;
    people.x = px, people.y = py;
    myque.push(people);
    while (!myque.empty()) {
        for (int i = 0;i < 4;i++) {
            point ling = myque.front();
            ling.x = ling.x + step[i][0], ling.y = ling.y + step[i][1];
            if (ling.x >= 0 && ling.y >= 0 && ling.x < x && ling.y < y) {
                if (room[ling.y][ling.x] != '#') {
                    room[ling.y][ling.x] = '#';
                    myque.push(ling);
                    count++;
                }
            }
        }
        myque.pop();
    }
    return count;
}
int main() {
    int x, y, px, py;
    char laji;
    while (scanf("%d %d", &x, &y)) {
        if (x == 0 && y == 0) {
            break;
        }
        scanf("%c", &laji);
        for (int i = 0;i < y;i++) {
            for (int j = 0;j < x;j++) {
                scanf("%c", &room[i][j]);
                if (room[i][j] == '@') {
                    px = j, py = i;
                    room[i][j] = '#';
                }
            }
            scanf("%c", &laji);
        }
        int res = bfs(px, py, x, y);
        printf("%d\n", res + 1);
    }
}
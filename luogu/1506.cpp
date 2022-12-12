#include<cstdio>
#include<queue>
using namespace std;
typedef struct point
{
    int i = 0;
    int j = 0;
}point;
int cou = 0;
char room[550][550] = { 0 };
int step[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
void bfs(int i, int j, int x, int y, int sta) {
    queue<point>q;
    point o;
    o.i = i, o.j = j;
    q.push(o);
    room[o.i][o.j] = '*';
    while (!q.empty()) {
        for (int i = 0;i < 4;i++) {
            point ling = q.front();
            ling.i += step[i][0];
            ling.j += step[i][1];
            if (ling.i >= 0 && ling.j >= 0 && ling.i < x && ling.j < y) {
                if (room[ling.i][ling.j] == '0') {
                    q.push(ling);
                    room[ling.i][ling.j] = '*';
                    if (sta == 1) {
                        cou++;
                    }
                }
            }
        }
        q.pop();
    }
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0;i < x;i++) {
        for (int j = 0;j < y;j++) {
            scanf(" %c", &room[i][j]);
        }
    }
    for (int i = 0;i < x;i++) {
        if (room[i][0] == '0') {
            bfs(i, 0, x, y, 0);
        }
        if (room[i][y - 1] == '0') {
            bfs(i, y - 1, x, y, 0);
        }
    }
    for (int i = 0;i < y;i++) {
        if (room[0][i] == '0') {
            bfs(0, i, x, y, 0);
        }
        if (room[x - 1][i] == '0') {
            bfs(x - 1, i, x, y, 0);
        }
    }
    for (int i = 0;i < x;i++) {
        for (int j = 0;j < y;j++) {
            if (room[i][j] == '*' && room[i + 1][j + 1] == '0') {
                bfs(i + 1, j + 1, x, y, 1);
                cou++;
            }
        }
    }
    printf("%d", cou);
}
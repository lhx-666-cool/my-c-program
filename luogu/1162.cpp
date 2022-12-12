#include<cstdio>
#include<queue>
using namespace std;
int gezi[40][40] = { 0 };
int step[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
typedef struct point
{
    int x = 0;
    int y = 0;
}point;
void bfs(point o, int n) {
    queue<point>q;
    q.push(o);
    gezi[o.y][o.x] = 2;
    while (!q.empty()) {
        for (int i = 0;i < 4;i++) {
            point ling = q.front();
            ling.x += step[i][0];
            ling.y += step[i][1];
            if (ling.x >= 0 && ling.y >= 0 && ling.x < n && ling.y < n) {
                if (gezi[ling.y][ling.x] == 0) {
                    gezi[ling.y][ling.x] = 2;
                    q.push(ling);
                    ;
                }
            }
        }
        q.pop();
    }
}
int main() {
    int n;
    scanf("%d", &n);
    point o;
    o.x = 40, o.y = 40;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            scanf("%d", &gezi[i][j]);
            if (gezi[i][j] == 1 && o.x == 40 && o.y == 40) {
                o.x = j;
                o.y = i;
            }
        }
    }
    o.x++, o.y++;
    bfs(o, n);
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            printf("%d ", gezi[i][j]);
        }
        printf("\n");
    }
}

#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;
typedef struct point
{
    int i = 0;
    int j = 0;
}point;
char map[110][110] = { 0 };
int step[4][2] = { {0,1},{1,0},{-1,0},{0,-1} };
void bfs(int i, int j, int r, int c) {
    queue<point>q;
    point o;
    o.i = i, o.j = j;
    map[o.i][o.j] = '0';
    q.push(o);
    while (!q.empty()) {
        for (int k = 0;k < 4;k++) {
            point ling = q.front();
            ling.i = ling.i + step[k][0];
            ling.j = ling.j + step[k][1];
            if (ling.i >= 0 && ling.j >= 0 && ling.i < r && ling.j < c) {
                if (map[ling.i][ling.j] != '0') {
                    q.push(ling);
                    map[ling.i][ling.j] = '0';
                }
            }
        }
        q.pop();
    }
}
int main() {
    int r, c;
    int cou = 0;
    cin >> r >> c;
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            scanf(" %c", &map[i][j]);
        }
    }
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            if (map[i][j] != '0') {
                bfs(i, j, r, c);
                cou++;
            }
        }
    }
    printf("%d", cou);
}
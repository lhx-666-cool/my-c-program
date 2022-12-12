#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;
typedef struct point
{
    int i = 0;
    int j = 0;
}point;
char map[1001][1001] = { 0 };
int step[2][2] = { {0,1},{1,0} };
void bfs(int i, int j) {
    queue<point>q;
    point o;
    o.i = i, o.j = j;
    map[o.i][o.j] = '2';
    q.push(o);
    while (!q.empty()) {
        for (int k = 0;k < 2;k++) {
            point ling = q.front();
            ling.i = ling.i + step[k][0];
            ling.j = ling.j + step[k][1];
            if (map[ling.i][ling.j] == '#') {
                q.push(ling);
                map[ling.i][ling.j] = '2';
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
            if (map[i][j] == '.' && map[i - 1][j] == '#' && map[i - 1][j + 1] == '#' && map[i][j + 1] == '#') {
                printf("Bad placement.");
                return 0;
            }
            if (map[i][j] == '.' && map[i - 1][j] == '#' && map[i - 1][j - 1] == '#' && map[i][j - 1] == '#') {
                printf("Bad placement.");
                return 0;
            }
            if (map[i][j] == '.' && map[i][j - 1] == '#' && map[i + 1][j - 1] == '#' && map[i + 1][j] == '#') {
                printf("Bad placement.");
                return 0;
            }
            if (map[i][j] == '.' && map[i][j + 1] == '#' && map[i + 1][j] == '#' && map[i + 1][j + 1] == '#') {
                printf("Bad placement.");
                return 0;
            }
        }
    }
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            if (map[i][j] == '#') {
                bfs(i, j);
                cou++;
            }
        }
    }
    printf("There are %d ships.", cou);
}
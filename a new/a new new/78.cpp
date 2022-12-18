#include<cstdio>
char map[100][100];
int step[100][100];
typedef struct point {
    int i;
    int j;
    char step;
}point;
int main() {
    int n, m, c;
    scanf("%d %d %d", &n, &m, &c);
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            scanf(" %c", &map[i][j]);
        }
    }
    point pre = { 1,c,map[1][c] };
    step[1][c] = 1;
    while (1) {
        point now;
        if (pre.step == 'N') {
            now.i = pre.i - 1;
            now.j = pre.j;
        } else if (pre.step == 'S') {
            now.i = pre.i + 1;
            now.j = pre.j;
        } else if (pre.step == 'W') {
            now.i = pre.i;
            now.j = pre.j - 1;
        } else if (pre.step == 'E') {
            now.i = pre.i;
            now.j = pre.j + 1;
        }
        now.step = map[now.i][now.j];
        if (now.step == 0) {
            printf("out %d", step[pre.i][pre.j]);
            return 0;
        }
        if (step[now.i][now.j] != 0) {
            printf("loop %d", step[pre.i][pre.j]);
            return 0;
        }
        step[now.i][now.j] = step[pre.i][pre.j] + 1;
        pre.i = now.i, pre.j = now.j, pre.step = now.step;
    }
}
#include "stdio.h"
int main() {
    int juzhen[110][110] = { {0} };
    int n, i, j, k;
    scanf("%d", &n);
    int x1[110], y1[110], x2[110], y2[110];
    for (i = 0;i < n;i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        for (j = x1[i];j < x2[i];j++) {
            for (k = y1[i];k < y2[i];k++) {
                juzhen[k][j] = 1;
            }
        }
    }
    int sum = 0;
    for (i = 0;i < 110;i++) {
        for (j = 0;j < 110;j++) {
            if (juzhen[i][j] == 1) {
                sum++;
            }
        }
    }
    printf("%d", sum);
}
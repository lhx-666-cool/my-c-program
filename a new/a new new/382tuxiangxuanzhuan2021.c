#include "stdio.h"
int main() {
    int n, m, juzhen[110][110];
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            scanf("%d", &juzhen[i][j]);
        }
    }
    for (i = m - 1;i >= 0;i--) {
        for (j = 0;j < n;j++) {
            printf("%d ", juzhen[j][i]);
        }
        printf("\n");
    }
}
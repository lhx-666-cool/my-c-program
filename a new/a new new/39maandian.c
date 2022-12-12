#include<stdio.h>
int main() {
    int shuru[99][99];
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j, k;//循环变量
    for (i = 0;i < m;i++) {
        for (j = 0;j < n;j++) {
            scanf("%d", &shuru[i][j]);
        }
    }

    for (i = 0;i < m;i++) {
        int hangmin = shuru[i][0];
        for (j = 0;j < n;j++) {
            if (hangmin >= shuru[i][j]) {
                hangmin = shuru[i][j];
            }
        }
        for (j = 0;j < n;j++) {
            if (hangmin == shuru[i][j]) {
                int liemax = shuru[0][j];
                for (k = 0;k < m;k++) {
                    if (liemax <= shuru[k][j]) {
                        liemax = shuru[k][j];
                    }
                }
                if (liemax == shuru[i][j]) {
                    printf("%d %d %d", i, j, shuru[i][j]);
                    goto re;
                }
            }
        }
    }
    printf("no\n");
re:;
}
#include<stdio.h>
int main() {
    int shuru[9][9];
    int n;
    scanf("%d", &n);
    int i, j, k;//循环变量
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            scanf("%d", &shuru[i][j]);
        }
    }

    for (i = 0;i < n;i++) {
        int hangmax = shuru[i][0];
        for (j = 0;j < n;j++) {
            if (hangmax <= shuru[i][j]) {
                hangmax = shuru[i][j];
            }
        }
        for (j = 0;j < n;j++) {
            if (hangmax == shuru[i][j]) {
                int liemin = shuru[0][j];
                for (k = 0;k < n;k++) {
                    if (liemin >= shuru[k][j]) {
                        liemin = shuru[k][j];
                    }
                }
                if (liemin == shuru[i][j]) {
                    printf("%d %d", i, j);
                    goto re;
                }
            }
        }
    }
    printf("NONE");
re:;
}
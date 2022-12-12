#include "stdio.h"
int main() {
    int n, i, j, shuru[110][110], head[110] = { -1 };
    scanf("%d", &n);
    for (i = 1;i <= n;i++) {
        for (j = 1;j <= n;j++) {
            scanf("%d", &shuru[i + j - 1][++head[i + j - 1]]);
        }
    }
    for (i = 1;i < n * n;i++) {
        if (i % 2 == 1) {
            for (j = head[i];j > 0;j--) {
                printf("%d ", shuru[i][j]);
            }
        } else {
            for (j = 1;j <= head[i];j++) {
                printf("%d ", shuru[i][j]);
            }
        }
    }
}
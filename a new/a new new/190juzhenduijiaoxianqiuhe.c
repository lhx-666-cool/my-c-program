#include "stdio.h"
int main() {
    int shuru[4][4];
    int i, j;
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            scanf("%d", &shuru[i][j]);
        }
    }
    int sum = 0;
    for (i = 0;i < 3;i++) {
        for (j = i;j <= i;j++) {
            sum += shuru[i][j];
        }
    }
    printf("%d", sum);
}
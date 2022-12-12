#include "stdio.h"
int main() {
    int n, juzhen[99][99];
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            scanf("%d", &juzhen[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += juzhen[i][i] + juzhen[i][n - 1 - i];
    }
    if (n % 2 == 1) {
        sum -= juzhen[n / 2][n / 2];
    }
    printf("%d", sum);
}
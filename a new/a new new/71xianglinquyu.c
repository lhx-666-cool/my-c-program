#include<stdio.h>
int main() {
    int juzhen[100][100];
    int res[100] = { 0 };
    int m, n, t, k;
    scanf("%d %d %d %d", &n, &m, &t, &k);
    int i, j;
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            scanf("%d", &juzhen[i][j]);
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            if (juzhen[i][j] != k && (juzhen[i][j + 1] == k || juzhen[i][j - 1] == k || juzhen[i + 1][j] == k || juzhen[i - 1][j] == k)) {
                res[juzhen[i][j]] = 1;
            }
        }
    }
    int sum = 0;
    for (i = 0;i <= t;i++) {
        if (res[i] == 1) {
            sum++;
        }
    }
    printf("%d", sum);
}
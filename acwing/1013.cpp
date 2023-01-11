#include<iostream>
using namespace std;
const int N = 11, M = 16;
int f[N][M], w[N][M];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            scanf("%d", &w[i][j]);
        }
    }
    for (int i = n;i >= 1;i--) {
        for (int j = 0;j <= m;j++) {
            f[i][j] = f[i + 1][j];
            for (int k = 0;k <= j;k++) {
                f[i][j] = max(f[i][j], f[i + 1][j - k] + w[i][k]);
            }
        }
    }
    printf("%d\n", f[1][m]);
    int j = m;
    for (int i = 1;i <= n;i++) {
        for (int k = 0;k <= j;k++) {
            if (f[i][j] == f[i + 1][j - k] + w[i][k]) {
                printf("%d %d\n", i, k);
                j -= k;
                break;
            }
        }
    }
}
#include<iostream>
using namespace std;
const int N = 55;
int w[N][N];
int f[N * 2][N][N];
int main() {
    int n, m;
    scanf("%d %d", &m, &n);
    for (int i = 1;i <= m;i++) {
        for (int j = 1;j <= n;j++) {
            scanf("%d", &w[i][j]);
        }
    }
    for (int k = 2;k <= m + n;k++) {
        for (int i1 = 1;i1 <= m;i1++) {
            for (int i2 = 1;i2 <= m;i2++) {
                int j1 = k - i1, j2 = k - i2;
                if (j1 >= 1 && j1 <= n && j2 >= 1 && j2 <= n) {
                    int t = w[i1][j1];
                    if (i1 != i2) {
                        t += w[i2][j2];
                    }
                    f[k][i1][i2] = max(f[k - 1][i1 - 1][i2 - 1], max(f[k - 1][i1 - 1][i2], max(f[k - 1][i1][i2 - 1], f[k - 1][i1][i2]))) + t;
                }
            }
        }
    }
    printf("%d", f[m + n][m][m]);
}
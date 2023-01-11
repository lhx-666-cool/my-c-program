#include<iostream>
using namespace std;
const int N = 11;
int a[N][N];
int f[2 * N][N][N];
int main() {
    int n;
    cin >> n;
    int a1, b, c;
    while (cin >> a1 >> b >> c, a && b && c) {
        a[a1][b] = c;
    }
    for (int k = 2;k <= n * 2;k++) {
        for (int i1 = 1;i1 <= n;i1++) {
            for (int i2 = 1;i2 <= n;i2++) {
                int j1 = k - i1, j2 = k - i2;
                if (j1 >= 1 && j1 <= n && j2 >= 1 && j2 <= n) {
                    int t = a[i1][j1];
                    if (i1 != i2) {
                        t += a[i2][j2];
                    }
                    f[k][i1][i2] = max(f[k][i1][i2], max(f[k - 1][i1 - 1][i2], max(f[k - 1][i1][i2 - 1], max(f[k - 1][i1 - 1][i2 - 1], f[k - 1][i1][i2])))) + t;
                }
            }
        }
    }
    cout << f[n * 2][n][n];
}
#include<iostream>
using namespace std;
const int N = 110;
int f[N][N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) {
                scanf("%d", &f[i][j]);
            }
        }
        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) {
                f[i][j] += max(f[i - 1][j], f[i][j - 1]);
            }
        }
        printf("%d\n", f[n][m]);
    }
}
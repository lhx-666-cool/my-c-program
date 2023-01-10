#include<iostream>
using namespace std;
const int N = 1010, M = 510;
int f[N][M];
int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    while (k--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = n;i >= a;i--) {
            for (int j = m;j > b;j--) {
                f[i][j] = max(f[i][j], f[i - a][j - b] + 1);
            }
        }
    }
    int res = m;
    while (f[n][res] == f[n][res - 1]) {
        res--;
    }
    printf("%d %d", f[n][m], m - res + 1);
}
#include<iostream>
using namespace std;
const int N = 1010;
int v[N], w[N], f[N][N];
int main() {
    int n, V;
    scanf("%d %d", &n, &V);
    for (int i = 1;i <= n;i++) {
        scanf("%d %d", &v[i], &w[i]);
    }
    for (int i = n;i >= 1;i--) {
        for (int j = 0;j <= V;j++) {
            f[i][j] = f[i + 1][j];
            if (j >= v[i]) {
                f[i][j] = max(f[i][j], f[i + 1][j - v[i]] + w[i]);
            }
        }
    }
    int j = V;
    for (int i = 1;i <= n;i++) {
        if (j >= v[i] && f[i][j] == f[i + 1][j - v[i]] + w[i]) {
            printf("%d ", i);
            j -= v[i];
        }
    }
}
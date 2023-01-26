#include<iostream>
#include<cstring>
using namespace std;
const int N = 55, M = 1e4 + 10;
int f[N][M];
int a[N], w[N];
int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 1;i <= n;i++) {
        cin >> w[i] >> a[i];
    }
    memset(f, 0x3f, sizeof f);
    f[0][0] = 0;
    for (int i = 1;i <= n;i++) {
        for (int j = 0;j <= x;j++) {
            for (int k = 0;k <= a[i];k++) {
                if (j >= k * w[i])
                    f[i][j] = min(f[i][j], f[i - 1][j - k * w[i]] + k * w[i]);
            }
        }
    }
    if (f[n][x] >= 1061109567) {
        printf("No");
    } else {
        printf("Yes");
    }
}
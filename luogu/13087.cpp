#include<iostream>
using namespace std;
long long  f[100010];
int c[100010], d[100010];
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &c[i]);
    }
    for (int i = 1;i <= n;i++) {
        scanf("%d", &d[i]);
    }
    for (int i = 1;i <= n;i++) {
        for (int j = m;j >= 1;j--) {
            if (j >= c[i]) {
                f[j] = max(f[j - c[i]] + d[i], f[j]);
            }
        }
    }
    printf("%lld", f[m]);
}
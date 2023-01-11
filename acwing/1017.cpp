#include<iostream>
#include<cstring>
using namespace std;
const int N = 110;
int a[N], f[N], g[N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
        }
        int len1 = 0;
        f[0] = a[0];
        for (int i = 1;i < n;i++) {
            if (a[i] > f[len1]) {
                f[++len1] = a[i];
            } else {
                f[lower_bound(f, f + len1 + 1, a[i]) - f] = a[i];
            }
        }
        int len2 = 0;
        g[0] = -a[0];
        for (int i = 1;i < n;i++) {
            if (-a[i] > g[len2]) {
                g[++len2] = -a[i];
            } else {
                g[lower_bound(g, g + len2 + 1, -a[i]) - g] = -a[i];
            }
        }
        printf("%d\n", max(len1 + 1, len2 + 1));
    }
}
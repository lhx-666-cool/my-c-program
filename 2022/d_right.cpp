#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 11;
int f[N], g[N];
int a[N];
int q[N];
int n, m;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (cin >> n >> m) {
        for (int i = 1;i <= n;++i) cin >> a[i];
        int h, t;
        f[n] = 0;
        h = t = 0;
        q[t++] = n;
        for (int i = n - 1;i >= 0;--i) {
            while (h<t && q[h] - i>m) ++h;
            if (a[i])f[i] = f[i + a[i]];
            else f[i] = f[q[h]] + 1;
            while (h < t && f[q[t - 1]] <= f[i]) --t;
            q[t++] = i;
        }
        g[n] = 0;
        h = t = 0;
        q[t++] = n;
        for (int i = n - 1;i >= 0;--i) {
            while (h<t && q[h] - i>m) ++h;
            if (a[i])g[i] = g[i + a[i]];
            else g[i] = g[q[h]] + 1;
            while (h < t && g[q[t - 1]] >= g[i]) --t;
            q[t++] = i;
        }
        cout << f[0] << " " << g[0] << "\n";
    }
}
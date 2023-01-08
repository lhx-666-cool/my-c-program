#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e5 + 10;
int a[N], f[N], g[N];
int main() {
    int n = 0;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> a[n]) {
        n++;
    };
    int len = 0;
    f[0] = a[n - 1];
    for (int i = n - 2;i >= 0;i--) {
        if (a[i] >= f[len]) {
            f[++len] = a[i];
        } else {
            int j = upper_bound(f, f + len + 1, a[i]) - f;
            f[j] = a[i];
        }
    }
    cout << len + 1 << endl;
    // memset(f, 0, sizeof f);
    int len2 = 0;
    g[0] = a[0];
    for (int i = 1;i < n;i++) {
        if (a[i] > g[len2]) {
            g[++len2] = a[i];
        } else {
            int j = lower_bound(g, g + len2 + 1, a[i]) - g;
            g[j] = a[i];
        }
    }
    cout << len2 + 1 << endl;
}
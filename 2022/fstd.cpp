#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=(a),i##_end=(b);i<i##_end;++i)
using ll = long long;
const int N = 1011, M = 200;
const int MX = 10011;
int n, V, m;
int x[M], y[M], b[M * 2];
int vis[N];
int f[MX];
int w[N], v[N];
int ans;
int ok[N];
void dfs(int i, int nw, int nv) {
    if (nw > V) return;
    if (i == m) {
        ans = max(ans, nv + f[V - nw]);
        return;
    }
    dfs(i + 1, nw, nv);
    auto wk = [&](int o) {
        if (!ok[o]) {
            ok[o]++;
            For(j, 0, m) if (x[j] == o || y[j] == o) ok[o ^ x[j] ^ y[j]]++;
            dfs(i + 1, nw + w[o], nv + v[o]);
            ok[o]--;
            For(j, 0, m) if (x[j] == o || y[j] == o) ok[o ^ x[j] ^ y[j]]--;
        }
    };
    wk(x[i]);
    wk(y[i]);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> V >> m;
    For(i, 0, m) cin >> x[i] >> y[i];
    For(i, 0, m) vis[x[i]] = vis[y[i]] = 1;
    for (int i = 1;i <= n;++i) cin >> w[i] >> v[i];
    for (int i = 1;i <= n;++i) {
        if (vis[i]) continue;
        for (int j = V;j >= w[i];--j)
            f[j] = max(f[j], f[j - w[i]] + v[i]);
    }
    ans = f[V];
    dfs(0, 0, 0);
    cout << ans << endl;
}
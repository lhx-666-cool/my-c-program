#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e5;
pair<int, pair<int, int>> f[N];
int fa[N];
void init(int n) {
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }
}
int find(int t) {
    if (t != fa[t]) {
        fa[t] = find(fa[t]);
    }
    return fa[t];
}
int uni(int x, int y) {
    fa[find(x)] = fa[find(y)];
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        memset(f, 0, sizeof f);
        int n;
        scanf("%d", &n);
        init(n);
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &f[i].second.first, &f[i].second.second, &f[i].first);
        }
        sort(f, f + n);
        bool  flag = false;
        for (int i = n - 1; i >= 0; i--) {
            if (f[i].first == 1) {
                uni(f[i].second.first, f[i].second.second);
            } else {
                if (find(f[i].second.first) == find(f[i].second.second)) {
                    printf("NO\n");
                    flag = true;
                    break;
                }
            }
        }
        if (!flag) {
            printf("YES\n");
        }

    }
}
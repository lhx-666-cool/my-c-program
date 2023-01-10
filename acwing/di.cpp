#include<iostream>
using namespace std;
const int N = 510;
int map[N][N], d[N];
bool st[N];
int n, m;
void init() {
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            map[i][j] = 1e9;
        }
        d[i] = 1e9;
    }
    d[1] = 0;
}
int di() {
    d[1] = 0;
    for (int i = 0;i < n;i++) {
        int t = -1;
        for (int j = 1;j <= n;j++) {
            if (!st[i] && (t == -1 || d[j] < d[t])) {
                t = j;
            }
        }
        for (int j = 1;j <= n;j++) {
            d[j] = min(d[j], d[t] + map[t][j]);
        }
        st[t] = true;
    }
    return d[n];
}
int main() {
    scanf("%d %d", &n, &m);
    init();
    for (int i = 0;i < m;i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = min(map[a][b], c);
    }
    int res = di();
    if (res > 1e9 / 2) {
        printf("-1");
    } else {
        printf("%d", d[50]);
    }
}
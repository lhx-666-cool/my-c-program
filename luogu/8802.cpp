#include<iostream>
using namespace std;
const int N = 1010;
const int INF = 1e9;
int map[N][N], d[N], city[N];
bool st[N];
int n, m;
void init() {
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            map[i][j] = INF;
        }
        d[i] = INF;
    }
    d[1] = 0;
}
void di() {
    for (int i = 0;i < n;i++) {
        int t = -1;
        for (int j = 1;j <= n;j++) {
            if (!st[j] && (t == -1 || d[j] < d[t])) {
                t = j;
            }
        }
        for (int j = 1;j <= n;j++) {
            d[j] = min(d[j], d[t] + map[t][j] + city[j]);
        }
        st[t] = true;
    }
}

int main() {
    scanf("%d %d", &n, &m);
    init();
    for (int i = 1;i <= n;i++) {
        scanf("%d", &city[i]);
    }
    for (int i = 1;i <= m;i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;
        map[b][a] = c;
    }
    di();
    printf("%d", d[n] - city[n]);
}

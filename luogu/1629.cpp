#include<iostream>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e9;
int map[N][N], d[N];
bool st[N];
int n, sum;
void init(int n) {
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            map[i][j] = INF;
        }
        d[i] = INF;
    }
    d[1] = 0;
}
void digkstra() {
    for (int i = 0;i < n;i++) {
        int t = -1;
        for (int j = 1;j <= n;j++) {
            if (!st[j] && (t == -1 || d[t] > d[j])) {
                t = j;
            }
        }
        for (int j = 1;j <= n;j++) {
            d[j] = min(d[j], d[t] + map[t][j]);
        }
        st[t] = true;
    }
}
void ret() {
    for (int i = 1;i <= n;i++) {
        for (int j = i + 1;j <= n;j++) {
            swap(map[i][j], map[j][i]);
        }
    }
    for (int i = 1;i <= n;i++) {
        d[i] = INF;
        st[i] = false;
    }
    d[1] = 0;
}
int main() {
    int m;
    scanf("%d %d", &n, &m);
    init(n);
    while (m--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = min(map[a][b], c);
    }
    digkstra();
    for (int i = 1;i <= n;i++) {
        sum += d[i];
    }
    // printf("%d   ", sum);
    ret();
    digkstra();
    for (int i = 1;i <= n;i++) {
        sum += d[i];
    }
    printf("%d", sum);
}

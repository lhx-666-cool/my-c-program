#include<iostream>
#include<queue>
#include<utility>
using namespace std;
typedef pair<int, int> PII;
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
    priority_queue<PII, vector<PII>, greater<PII> >p;
    p.push({ 0, 1 });
    while (!p.empty()) {
        auto t = p.top();
        p.pop();
        int ver = t.second, dis = t.first;
        if (st[ver] == true) {
            continue;
        } else {
            st[ver] = true;
            for (int i = 1;i <= n;i++) {
                if (d[i] > dis + map[ver][i]) {
                    d[i] = dis + map[ver][i];
                    p.push({ d[i],i });
                }
            }
        }
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
    ret();
    digkstra();
    for (int i = 1;i <= n;i++) {
        sum += d[i];
    }
    printf("%d", sum);
}

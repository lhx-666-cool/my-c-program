#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
typedef pair<int, int> PII;
const int M = 2e5 + 10, N = 1e5 + 10;
int head[N], d[N], e[M], ne[M], w[M], idx;
bool st[N];
void insert(int x, int y, int v) {
    e[idx] = y, ne[idx] = head[x], w[idx] = v; head[x] = idx++;
}
void dij(int s) {
    memset(d, 0x3f, sizeof d);
    d[s] = 0;
    priority_queue<PII, vector<PII>, greater<PII> >p;
    p.push({ 0, s });
    while (!p.empty()) {
        auto t = p.top();
        p.pop();
        int ver = t.second, dis = t.first;
        if (st[ver] == true) {
            continue;
        } else {
            st[ver] = true;
            for (int i = head[ver];i != -1;i = ne[i]) {
                if (d[e[i]] > dis + w[i]) {
                    d[e[i]] = dis + w[i];
                    p.push({ d[e[i]], e[i] });
                }
            }
        }
    }
}
int main() {
    memset(head, -1, sizeof head);
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    for (int i = 0;i < m;i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        insert(u, v, w);
    }
    dij(s);
    for (int i = 1;i <= n;i++) {
        printf("%d ", d[i]);
    }
}

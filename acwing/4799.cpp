#include <iostream>
#include <cstring>
#include <algorithm>
#include<queue>
using namespace std;
const int N = 100000 + 10;
int e[N], ne[N], head[N], idx;
int a[N];
int d[N];
bool st[N];
void insert(int a, int b) {
    ne[idx] = head[a], e[idx] = b, head[a] = idx++;
}
void bfs(int n) {
    queue<int>q;
    q.push(n);
    st[n] = true;
    d[n] = 0;
    while (!q.empty()) {
        int a = q.front();
        q.pop();
        for (int i = head[a];i != -1;i = ne[i]) {
            int j = e[i];
            if (st[j] == false) {
                d[j] = d[a] + 1;
                q.push(j);
                st[j] = true;
            }
        }
    }
}
int main() {
    int n, m;
    memset(head, -1, sizeof head);
    memset(d, -0x3f, sizeof d);
    scanf("%d%d", &n, &m);
    for (int i = 0;i < m;i++) {
        int ax, b;
        scanf("%d %d", &ax, &b);
        insert(ax, b), insert(b, ax);
        a[ax]++;
        a[b]++;
    }
    int i;
    for (i = 1;i <= n;i++) {
        if (a[i] == 1) {
            break;
        }
    }
    bfs(i);
    int res = -1;
    for (int i = 1;i <= n;i++) {
        res = max(res, d[i]);
    }
    cout << res;
}
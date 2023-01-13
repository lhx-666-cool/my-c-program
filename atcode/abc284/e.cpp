#include<iostream>
#include<cstring>
using namespace std;
const int N = 2e6 + 10;
int h[N], e[N], ne[N], idx;
bool st[N];
void ins(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}
long long int cnt;
void dfs(int u) {
    for (int i = h[u]; i != -1;i = ne[i]) {
        int j = e[i];
        if (!st[j]) {
            st[j] = true;
            cnt++;
            if (cnt + 1 >= 1e6) {
                return;
            }
            dfs(j);
            st[j] = false;
        }
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    memset(h, -1, sizeof h);
    for (int i = 0;i < m;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        ins(a, b);
        ins(b, a);
    }
    st[1] = true;
    dfs(1);
    if (cnt + 1 > 1e6) {
        cout << "1000000";
    } else {
        cout << cnt + 1;
    }

}
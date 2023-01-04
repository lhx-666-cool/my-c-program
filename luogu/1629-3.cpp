#include<iostream>
#include<cstring>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9;
int n, m, sum;
int d[N];
struct Edge {
    int a, b, w;
}edge[N];
void bellman_ford() {
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            int a = edge[j].a, b = edge[j].b, w = edge[j].w;
            d[b] = min(d[b], d[a] + w);
        }
    }
    for (int i = 1;i <= n;i++) {
        sum += d[i];
    }
}
void bellman_ford2() {
    memset(d, 0x3f, sizeof d);
    d[1] = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            int a = edge[j].b, b = edge[j].a, w = edge[j].w;
            d[b] = min(d[b], d[a] + w);
        }
    }
    for (int i = 1;i <= n;i++) {
        sum += d[i];
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0;i < m;i++) {
        int a, b, w;
        scanf("%d %d %d", &a, &b, &w);
        edge[i] = { a,b,w };
    }
    bellman_ford();
    bellman_ford2();
    printf("%d", sum);
}
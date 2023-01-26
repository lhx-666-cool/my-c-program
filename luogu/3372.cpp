#include<iostream>
using namespace std;
const int N = 1e5 + 10;
typedef long long LL;
struct Node {
    int l, r;
    LL sum, ADD;
}tr[N * 4];
int w[N];
void pushup(int u) {
    tr[u].sum = tr[u * 2].sum + tr[u * 2 + 1].sum;
}
void pushdown(int u) {
    Node& root = tr[u], & left = tr[u * 2], & right = tr[u * 2 + 1];
    if (root.ADD) {
        left.ADD += root.ADD, left.sum += (LL)(left.r - left.l + 1) * root.ADD;
        right.ADD += root.ADD, right.sum += (LL)(right.r - right.l + 1) * root.ADD;
        root.ADD = 0;
    }
}
void build(int u, int l, int r) {
    tr[u].l = l, tr[u].r = r;
    if (l == r) {
        tr[u].sum = w[l];
    } else {
        int mid = (l + r) / 2;
        build(u * 2, l, mid), build(u * 2 + 1, mid + 1, r);
        pushup(u);
    }
}
void modify(int u, int l, int r, int v) {
    if (tr[u].l >= l && tr[u].r <= r) {
        tr[u].sum += (LL)(tr[u].r - tr[u].l + 1) * v;
        tr[u].ADD += v;
    } else {
        pushdown(u);
        int mid = (tr[u].l + tr[u].r) / 2;
        if (l <= mid) {
            modify(u * 2, l, r, v);
        }
        if (r > mid) {
            modify(u * 2 + 1, l, r, v);
        }
        pushup(u);
    }
}
LL query(int u, int l, int r) {
    if (tr[u].l >= l && tr[u].r <= r) {
        return tr[u].sum;
    }
    if (tr[u].ADD) {
        pushdown(u);
    }
    int mid = (tr[u].l + tr[u].r) / 2;
    LL v = 0;
    if (l <= mid) {
        v = query(u * 2, l, r);
    }
    if (r > mid) {
        v += query(u * 2 + 1, l, r);
    }
    return v;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &w[i]);
    }
    build(1, 1, n);
    while (m--) {
        // int a;
        char op[2];
        // scanf("%d", &a);
        scanf("%s", op);
        if (*op == 'C') {
            int b, c, d;
            scanf("%d %d %d", &b, &c, &d);
            modify(1, b, c, d);
        } else {
            int b, c;
            scanf("%d %d", &b, &c);
            printf("%lld\n", query(1, b, c));
        }
    }
}

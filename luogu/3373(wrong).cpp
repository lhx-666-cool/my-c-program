#include<iostream>
using namespace std;
const int N = 1e5 + 10;
typedef long long LL;
LL p;
struct Node {
    int l, r;
    LL sum, ADD, mul = 1;
}tr[N * 4];
int w[N];
void pushup(int u) {
    tr[u].sum = (tr[u * 2].sum + tr[u * 2 + 1].sum) % p;
}
void pushdown(int u) {
    Node& root = tr[u], & left = tr[u * 2], & right = tr[u * 2 + 1];
    if (root.ADD) {
        left.ADD += root.ADD, left.sum += ((LL)(left.r - left.l + 1) * root.ADD) % p;
        right.ADD += root.ADD, right.sum += ((LL)(right.r - right.l + 1) * root.ADD) % p;
        root.ADD = 0;
    }
    if (root.mul) {
        left.mul *= root.mul, left.sum = (left.sum * root.mul) % p;
        right.mul *= root.mul, right.sum = (right.sum * root.mul) % p;
        root.mul = 1;
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
void modifyadd(int u, int l, int r, int v) {
    if (tr[u].l >= l && tr[u].r <= r) {
        tr[u].sum += ((LL)(tr[u].r - tr[u].l + 1) * v) % p;
        tr[u].ADD += v;
    } else {
        pushdown(u);
        int mid = (tr[u].l + tr[u].r) / 2;
        if (l <= mid) {
            modifyadd(u * 2, l, r, v);
        }
        if (r > mid) {
            modifyadd(u * 2 + 1, l, r, v);
        }
        pushup(u);
    }
}
void modifymul(int u, int l, int r, int v) {
    if (tr[u].l >= l && tr[u].r <= r) {
        tr[u].sum = (tr[u].sum * v) % p;
        tr[u].mul *= v;
        pushdown(u);
    } else {
        pushdown(u);
        int mid = (tr[u].l + tr[u].r) / 2;
        if (l <= mid) {
            modifymul(u * 2, l, r, v);
        }
        if (r > mid) {
            modifymul(u * 2 + 1, l, r, v);
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
    scanf("%d %d %lld", &n, &m, &p);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &w[i]);
    }
    build(1, 1, n);
    while (m--) {
        int a;
        scanf("%d", &a);
        if (a == 1) {
            int b, c, d;
            scanf("%d %d %d", &b, &c, &d);
            modifymul(1, b, c, d);
        } else if (a == 2) {
            int b, c, d;
            scanf("%d %d %d", &b, &c, &d);
            modifyadd(1, b, c, d);
        } else {
            int b, c;
            scanf("%d %d", &b, &c);
            printf("%lld\n", query(1, b, c) % p);
        }
    }
}

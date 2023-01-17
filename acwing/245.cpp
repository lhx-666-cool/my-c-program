#include<iostream>
using namespace std;
const int N = 5e5 + 10;
int n, m;
struct Node {
    int l, r;
    int sum, lmax, rmax, tmax;
}tr[N * 4];
int w[N];
void pushup_(Node& u, Node& l, Node& r) {
    u.sum = l.sum + r.sum;
    u.lmax = max(l.lmax, l.sum + r.lmax);
    u.rmax = max(r.rmax, r.sum + l.rmax);
    u.tmax = max(max(l.tmax, r.tmax), l.rmax + r.lmax);
}
void pushup(int u) {
    pushup_(tr[u], tr[u * 2], tr[u * 2 + 1]);
}
void build(int u, int l, int r) {
    if (l == r) {
        tr[u] = { l,r,w[l],w[l],w[l],w[l] };
    } else {
        tr[u].l = l, tr[u].r = r;
        int mid = (l + r) / 2;
        build(u * 2, l, mid), build(u * 2 + 1, mid + 1, r);
        pushup(u);
    }
}
void modify(int u, int x, int v) {
    if (tr[u].l == x and tr[u].r == x) {
        tr[u] = { x,x,v,v,v,v };
    } else {
        int mid = (tr[u].l + tr[u].r) / 2;
        if (x <= mid) {
            modify(u * 2, x, v);
        } else {
            modify(u * 2 + 1, x, v);
        }
        pushup(u);
    }
}
Node query(int u, int l, int r) {
    if (tr[u].l >= l and tr[u].r <= r) {
        return tr[u];
    } else {
        int mid = (tr[u].l + tr[u].r) / 2;
        if (r <= mid) {
            return query(u * 2, l, r);
        } else if (l > mid) {
            return query(u * 2 + 1, l, r);
        } else {
            Node left = query(u * 2, l, r);
            Node right = query(u * 2 + 1, l, r);
            Node res;
            pushup_(res, left, right);
            return res;
        }
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &w[i]);
    }
    build(1, 1, n);
    int a, b, c;
    for (int i = 0;i < m;i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 1) {
            if (b > c) {
                swap(b, c);
            }
            Node res = query(1, b, c);
            printf("%d\n", res.tmax);
        } else {
            modify(1, b, c);
        }
    }
}
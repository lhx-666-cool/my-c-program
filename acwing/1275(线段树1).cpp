#include<iostream>
using namespace std;
const int N = 2e5 + 10;
struct Node {
    int l, r, v;
}tr[N * 2];
int m, p;
void pushup(int u) {
    tr[u].v = max(tr[u * 2].v, tr[u * 2 + 1].v);
}
void build(int u, int l, int r) {
    tr[u].l = l, tr[u].r = r;
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    build(u * 2, l, mid);
    build(u * 2 + 1, mid + 1, r);
}
int query(int u, int l, int r) {
    if (tr[u].l >= l && tr[u].r <= r) {
        return tr[u].v;
    }
    int v = 0;
    int mid = (tr[u].l + tr[u].r) / 2;
    if (l <= mid) {
        v = query(u * 2, l, r);
    }
    if (r > mid) {
        v = max(v, query(u * 2 + 1, l, r));
    }
    return v;
}
void modify(int u, int x, int v) {
    if (tr[u].l == x && tr[u].r == x) {
        tr[u].v = v;
    } else {
        int mid = (tr[u].l + tr[u].r) / 2;
        if (x <= mid) {
            modify(u * 2, x, v);
        } else if (x > mid) {
            modify(u * 2 + 1, x, v);
        }
        pushup(u);
    }
}
int main() {
    scanf("%d %d", &m, &p);
    build(1, 1, m);
    char op[2];
    int x;
    int a, n = 0;
    while (m--) {
        scanf("%s %d", op, &x);
        if (op[0] == 'Q') {
            a = query(1, n - x + 1, n);
            printf("%d\n", a);
        } else if (op[0] == 'A') {
            modify(1, n + 1, ((long long int)x + a) % p);
            n++;
        }
    }
}

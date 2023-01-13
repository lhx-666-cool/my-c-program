#include<iostream>
using namespace std;
const int N = 2e5 + 10;
struct Node {
    int l, r;
    int min = 1e9;
    int minzuowei = 1;
}tr[N * 4];
int m, n;
void pushup(int u) {
    if (tr[u * 2].min < tr[u * 2 + 1].min) {
        tr[u].min = tr[u * 2].min;
        tr[u].minzuowei = tr[u * 2].minzuowei;
    } else {
        tr[u].min = tr[u * 2 + 1].min;
        tr[u].minzuowei = tr[u * 2 + 1].minzuowei;
    }
}
void build(int u, int l, int r) {
    tr[u].l = l, tr[u].r = r;
    if (l == r) {
        tr[u].minzuowei = l;
        return;
    }
    int mid = (l + r) / 2;
    build(u * 2, l, mid);
    build(u * 2 + 1, mid + 1, r);
}
void modify(int u, int x, int minx) {
    if (tr[u].l == x && tr[u].r == x) {
        tr[u].min = minx;
    } else {
        int mid = (tr[u].l + tr[u].r) / 2;
        if (x <= mid) {
            modify(u * 2, x, minx);
        } else {
            modify(u * 2 + 1, x, minx);
        }
        pushup(u);
    }
}
int query(int u, int l, int r, int minx) {
    int res = 1e9;
    if (tr[u].l >= l && tr[u].r <= r) {
        if (tr[u].min > minx) {
            return 1e9;
        }
    }
    if (tr[u].l == tr[u].r) {
        if (tr[u].min > minx) {
            return 1e9;
        } else {
            return tr[u].minzuowei;
        }
    }
    int mid = (tr[u].l + tr[u].r) / 2;
    if (l <= mid) {
        res = min(res, query(u * 2, l, r, minx));
    }
    if (res != 1e9) {
        return res;
    }
    if (r > mid) {
        res = min(res, query(u * 2 + 1, l, r, minx));
    }
    if (res != 1e9) {
        return res;
    }
    return 1e9;
}
int main() {
    scanf("%d %d", &n, &m);
    build(1, 1, n);
    char op[2];
    int a, b;
    while (m--) {
        scanf("%s %d %d", op, &a, &b);
        if (op[0] == 'M') {
            modify(1, b, a);
        } else {
            int res = query(1, b, n, a);
            if (res == 1e9) {
                printf("-1\n");
            } else {
                printf("%d\n", res);
            }
        }
    }
}

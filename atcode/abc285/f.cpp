#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int lal[26];
struct Node {
    int l, r;
    char lnum, rnum;
    bool isval;
    int la[26];
}tr[N * 4];
char s[N];
void pushup(int u) {
    tr[u].lnum = tr[u * 2].lnum;
    tr[u].rnum = tr[u * 2 + 1].rnum;
    for (int i = 0;i < 26;i++) {
        tr[u].la[i] = tr[u * 2].la[i] + tr[u * 2 + 1].la[i];
    }
    if (tr[u * 2].rnum <= tr[u * 2 + 1].lnum && tr[u * 2].isval == true && tr[u * 2 + 1].isval == true) {
        tr[u].isval = true;
    } else {
        tr[u].isval = false;
    }
}
void build(int u, int l, int r) {
    tr[u].l = l, tr[u].r = r;
    if (l == r) {
        tr[u].lnum = s[l];
        tr[u].rnum = s[l];
        tr[u].isval = true;
        tr[u].la[s[l] - 'a']++;
        return;
    }
    int mid = (tr[u].l + tr[u].r) / 2;
    build(u * 2, l, mid), build(u * 2 + 1, mid + 1, r);
    pushup(u);
}
Node query(int u, int l, int r) {
    if (tr[u].l >= l && tr[u].r <= r) {
        return tr[u];
    }
    int mid = (tr[u].l + tr[u].r) / 2;
    bool ai = false, bi = false;
    Node a, b;
    if (l <= mid) {
        a = query(u * 2, l, r);
        ai = true;
    }
    if (r > mid) {
        b = query(u * 2 + 1, l, r);
        bi = true;
    }
    if (ai && bi) {
        Node res;
        res.l = a.l, res.r = b.r;
        res.lnum = a.lnum, res.rnum = b.rnum;
        for (int i = 0;i < 26;i++) {
            res.la[i] = a.la[i] + b.la[i];
        }
        if (a.isval == true && b.isval == true && a.rnum <= b.lnum) {
            res.isval = true;
        } else {
            res.isval = false;
        }
        return res;
    } else if (ai) {
        return a;
    } else {
        return b;
    }
}
void modify(int u, int x, char ch) {
    if (tr[u].l == x && tr[u].r == x) {
        lal[tr[u].lnum - 'a']--;
        tr[u].la[tr[u].lnum - 'a']--;
        tr[u].lnum = ch, tr[u].rnum = ch;
        lal[tr[u].lnum - 'a']++;
        tr[u].la[tr[u].lnum - 'a']++;
    } else {
        int mid = (tr[u].l + tr[u].r) / 2;
        if (x <= mid) {
            modify(u * 2, x, ch);
        } else {
            modify(u * 2 + 1, x, ch);
        }
        pushup(u);
    }
}
int main() {
    int n;
    int q;
    cin >> n;
    scanf("%s", s + 1);
    cin >> q;
    build(1, 1, n);
    for (int i = 1;i <= n;i++) {
        lal[s[i] - 'a']++;
    }
    while (q--) {
        int a;
        scanf("%d", &a);
        if (a == 2) {
            int b, c;
            scanf("%d %d", &b, &c);
            if (b > c) {
                swap(b, c);
            }
            Node res = query(1, b, c);
            if (res.isval) {
                bool flag = false;
                for (int i = res.lnum - 'a' + 1;i < res.rnum - 'a';i++) {
                    if (res.la[i] != lal[i]) {
                        printf("No\n");
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    printf("Yes\n");
                }
            } else {
                printf("No\n");
            }
        } else {
            int b;
            char c;
            scanf("%d %c", &b, &c);
            modify(1, b, c);
        }
    }
}
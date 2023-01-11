#include<iostream>
using namespace std;
const int N = 1010;
const int V = 10010;
int bcj[N];
int f[V];
int ai[N][100][2];
int s[N];
int find(int x) {
    if (x != bcj[x]) {
        bcj[x] = find(bcj[x]);
    }
    return bcj[x];
}
void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        bcj[x] = bcj[y];
    }
}
int main() {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    for (int i = 1;i <= n;i++) {
        bcj[i] = i;
    }
    for (int i = 0;i < q;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        uni(a, b);
    }

    for (int i = 1;i <= n;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int j = find(i);
        ai[j][s[j]][0] = a;
        ai[j][s[j]][1] = b;
        s[j]++;
    }
    for (int i = 1;i <= n;i++) {
        if (s[i] == 0) {
            continue;
        }
        for (int j = m;j >= 0;j--) {
            for (int k = 0;k < s[i];k++) {
                if (j >= ai[i][k][0]) {
                    f[j] = max(f[j], f[j - ai[i][k][0]] + ai[i][k][1]);
                }
            }
        }
    }
    printf("%d\n", f[m]);
}
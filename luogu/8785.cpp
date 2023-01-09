#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 5e4 + 10;
typedef struct point {
    long long x;
    long long y;
    long long r;
} po;
po p[N];
int cnt;
long long xn[N];
bool st[N];
int n, m;
int cmp(po x, po y) {
    if (x.x < y.x) {
        return 1;
    }
    return 0;
}
void dfs(int x, int y, int r) {
    int i = lower_bound(xn, xn + n, x - r) - xn;
    int ri = upper_bound(xn, xn + n, x + r) - xn;
    for (;i < ri && i < n;i++) {
        if (st[i] == false && ((x - p[i].x) * (x - p[i].x) + (y - p[i].y) * (y - p[i].y)) <= r * r) {
            cnt++;
            st[i] = true;
            dfs(p[i].x, p[i].y, p[i].r);
        }
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0;i < n;i++) {
        scanf("%lld %lld %lld", &p[i].x, &p[i].y, &p[i].r);
    }
    sort(p, p + n, cmp);
    for (int i = 0;i < n;i++) {
        xn[i] = p[i].x;
    }
    for (int i = 0;i < m;i++) {
        long long x, y, r;
        scanf("%lld %lld %lld", &x, &y, &r);
        dfs(x, y, r);
    }
    printf("%d", cnt);
}
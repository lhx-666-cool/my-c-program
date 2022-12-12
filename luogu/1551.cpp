#include<cstdio>
int peo[5500] = { 0 };
int find(int x) {
    if (x == peo[x]) {
        return x;
    } else {
        peo[x] = find(peo[x]);
        return peo[x];
    }
}
void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        peo[x] = peo[y];
    }
}
int main() {
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    for (int i = 1;i <= n;i++) {
        peo[i] = i;
    }
    for (int i = 1;i <= m;i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        uni(x, y);
    }
    for (int i = 1;i <= p;i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (find(x) != find(y)) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
}
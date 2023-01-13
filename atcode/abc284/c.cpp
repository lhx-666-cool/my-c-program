#include<iostream>
using namespace std;
const int N = 110;
int f[N];
int find(int x) {
    if (x != f[x]) {
        f[x] = find(f[x]);
    }
    return f[x];
}
void uni(int x, int y) {
    f[find(x)] = f[find(y)];
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        f[i] = i;
    }
    for (int i = 0;i < m;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        uni(a, b);
    }
    int res = 0;
    for (int i = 1;i <= n;i++) {
        if (f[i] == i) {
            res++;
        }
    }
    cout << res;
}
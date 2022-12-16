#include<cstdio>
int f[10001];
int a[101];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &a[i]);
    }
    f[0] = 1;
    for (int i = 1;i <= n;i++) {
        for (int j = m;j >= 0;j--) {
            if (j >= a[i]) {
                f[j] += f[j - a[i]];
            }
        }
    }
    printf("%d", f[m]);
}
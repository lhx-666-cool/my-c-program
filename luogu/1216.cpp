#include<cstdio>
#include<algorithm>
using namespace std;
int f[1100];
int a[1100][1100];
int main() {
    int r;
    scanf("%d", &r);
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j <= i;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1;i <= r;i++) {
        for (int j = r;j >= 1;j--) {
            f[j] = max(f[j - 1], f[j]) + a[i][j];
        }
    }
    int res = *max_element(f + 1, f + r + 1);
    printf("%d", res);
}
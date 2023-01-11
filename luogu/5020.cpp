#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 110, M = 25010;
int a[N], f[M];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a + n);
        memset(f, 0, sizeof f);
        int res = 0;
        f[0] = 1;
        for (int i = 0;i < n;i++) {
            for (int j = a[i];j <= a[n - 1];j++) {
                f[j] += f[j - a[i]];
            }
        }
        for (int i = 0;i < n;i++) {
            if (f[a[i]] == 1) {
                res++;
            }
        }
        printf("%d\n", res);
    }
}
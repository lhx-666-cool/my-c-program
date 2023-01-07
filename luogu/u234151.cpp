#include<iostream>
#include<cstring>
using namespace std;
const int N = 120;
int n;
int a[N], f[N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
        }
        int res = 0;
        for (int i = 0;i < n;i++) {
            f[i] = 1;
            for (int j = 0;j < i;j++) {
                if (a[i] < a[j]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            res = max(res, f[i]);
        }
        memset(f, 0, sizeof f);
        for (int i = 0;i < n;i++) {
            f[i] = 1;
            for (int j = 0;j < i;j++) {
                if (a[j] < a[i]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            res = max(res, f[i]);
        }
        printf("%d\n", res);
    }
}

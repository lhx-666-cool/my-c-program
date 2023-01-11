#include<iostream>
using namespace std;
const int N = 1010;
int f[N], a[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    int res = 0;
    for (int i = 0;i < n;i++) {
        f[i] = a[i];
        for (int j = 0;j < i;j++) {
            if (a[j] < a[i]) {
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
        res = max(res, f[i]);
    }
    printf("%d", res);
}
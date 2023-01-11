#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
int f[N], a[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    int len = 0;
    f[0] = a[0];
    for (int i = 1;i < n;i++) {
        if (a[i] > f[len]) {
            f[++len] = a[i];
        } else {
            int j = lower_bound(f, f + n, a[i]) - f;
            f[j] = a[i];
        }
    }
    printf("%d", len + 1);
}
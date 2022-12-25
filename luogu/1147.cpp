#include<iostream>
#include<algorithm>
using namespace std;
long long int f[2000001];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i < n;i++) {
        f[i] = f[i - 1] + i;
    }
    for (int i = 1;i < n / 2;i++) {
        long long int x = f[i] + n;
        long long int* y = lower_bound(f + 1, f + n, x);
        if (x == *y) {
            printf("%d %lld\n", i + 1, y - f);
        }
    }
}
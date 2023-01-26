#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int f[N];
int main() {
    int x, y;
    int n;
    scanf("%d", &n);
    long long sum = 0, res = 0;
    scanf("%d", &x);
    for (int i = 0;i < n - 1;i++) {
        scanf("%d", &y);
        f[i] = abs(x - y);
        x = y;
        sum += f[i];
    }
    for (int i = 0;i < n - 1;i++) {
        sum -= f[i];
        res += f[i] * sum;
    }
    printf("%lld", res);

}
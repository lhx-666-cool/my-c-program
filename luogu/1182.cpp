#include<iostream>
#include<algorithm>
using namespace std;
int a[100100];
int n, m;
bool check(long long k) {
    long long j = 0, num = 1;
    for (int i = 0;i < n;i++) {
        if (j + a[i] > k) {
            j = a[i];
            num++;
        } else {
            j += a[i];
        }
    }
    return num <= m;
}
int main() {
    scanf("%d %d", &n, &m);
    int sum = 0;
    int maxn = 0;
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        maxn = max(maxn, a[i]);
    }
    long long l = maxn, r = sum;
    while (l < r) {
        long long mid = (l + r) >> 1;
        if (check(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    printf("%lld", l);
    scanf("%d", &m);
}
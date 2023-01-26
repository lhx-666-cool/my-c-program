#include<iostream>
using namespace std;
const int N = 2e5 + 10;
int a[N];
int main() {
    long long sum = 0;
    long long res = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int i = 0;i < n;i++) {
        sum -= a[i];
        res += sum * a[i];
    }
    printf("%lld", res);
}
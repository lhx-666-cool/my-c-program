#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 2e5 + 10;
typedef pair<int, int> PII;
int f[N];
PII a[N];
int as[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d %d", &a[i].first, &a[i].second);
    }
    sort(a, a + n);
    int len = 0;
    f[0] = a[0].second;
    for (int i = 1;i < n;i++) {
        if (a[i].second > f[len]) {
            f[++len] = a[i].second;
        } else {
            int j = lower_bound(f, f + len, a[i].second) - f;
            f[j] = a[i].second;
        }
    }
    printf("%d", len + 1);
}
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 5010;
int f[N];
typedef pair<int, int> PII;
PII a[N];
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
            f[lower_bound(f, f + len + 1, a[i].second) - f] = a[i].second;
        }
    }
    printf("%d", len + 1);
}
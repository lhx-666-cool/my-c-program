#include<iostream>
#include<algorithm>
using namespace std;
int a[100010], n, m;
bool check(int k) {
    int dis = 0, cow = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] >= dis) {
            cow++;
            dis = a[i] + k;
        }
    }
    if (cow >= m) {
        return true;
    }
    return false;
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int l = 0, r = INT_MAX;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    printf("%d", l);
}
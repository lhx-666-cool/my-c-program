#include<iostream>
using namespace std;
const int N = 10010;
typedef long long LL;
char str[N];
int main() {
    LL res = 1e15;
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    scanf("%s", str);
    int head = n;
    LL cnt1 = 0;
    LL cnt2 = 0;
    for (int j = 0, k = head - 1;j <= k;j++, k--) {
        if (str[j] != str[k]) {
            cnt2++;
        }
    }
    res = min(res, cnt2 * b);
    for (int i = 0;i < n;i++) {
        str[head++] = str[i];
        cnt1++;
        LL cnt2 = 0;
        for (int j = i + 1, k = head - 1;j <= k;j++, k--) {
            if (str[j] != str[k]) {
                cnt2++;
            }
        }
        res = min(res, cnt1 * a + cnt2 * b);
    }
    printf("%lld", res);
}
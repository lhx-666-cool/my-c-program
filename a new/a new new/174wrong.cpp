#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[20000];
int w[200];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        memset(dp, 0, sizeof dp);
        memset(w, 0, sizeof w);
        int n;
        scanf("%d", &n);
        int sum = 0;
        for (int i = 1;i <= n;i++) {
            scanf("%d", &w[i]);
            sum += w[i];
        }
        for (int i = 1;i <= n;i++) {
            for (int j = sum / 2;j >= 1;j--) {
                if (j >= w[i]) {
                    dp[j] = max(dp[j - w[i]] + w[i], dp[j]);
                } else {
                    dp[j] = dp[j];
                }
            }
        }
        printf("%d\n", sum - 2 * dp[sum / 2]);
    }
}
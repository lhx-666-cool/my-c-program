#include <cstdio>
const int LEN = 12;
int dp[LEN][10];
int digit[LEN];
void init() {
    dp[0][0] = 1;
    for (int i = 1;i <= LEN;i++) {
        for (int j = 0;j < 10;j++) {
            for (int k = 0;k < 10;k++) {
                if (j != 4) {
                    dp[i][j] += dp[i - 1][k];
                }
            }
        }
    }
}
int solve(int len) {
    int ans = 0;
    for (int i = len;i >= 1;i--) {
        for (int j = 0;j < digit[i];j++) {
            if (j != 4) {
                ans += dp[i][j];
            }
            if (digit[i] == 4) {
                ans--;
                break;
            }
        }
    }
    return ans;
}
int main() {
    int n, len = 0;
    init();
    scanf("%d", &n);
    while (n) {
        digit[++len] = n % 10;
        n /= 10;
    }
    printf("%d\n", solve(len) + 1);
    return 0;
}
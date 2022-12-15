#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
int dp[2002][2002];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0;i < m;i++) {
        for (int j = 1;j <= n;j++) {
            scanf("%d", &dp[i][j]);
        }
    }
    for (int j = 1;j <= n;j++) {
        dp[0][j] = min(dp[m - 1][j - 1], dp[0][j - 1]) + dp[0][j];
        for (int i = 1;i < m;i++) {
            dp[i][j] = min(dp[i - 1][j - 1], dp[i][j - 1]) + dp[i][j];
        }
    }
    int min = INT_MAX;
    for (int i = 0;i < m;i++) {
        if (dp[i][n] < min) {
            min = dp[i][n];
        }
    }
    printf("%d", min);
}
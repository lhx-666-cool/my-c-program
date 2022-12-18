#include<stdio.h>
int W[201], sum, dp[201][20001];	//[201]是便于将物品从1开始编号
//[20001]同理
int max(int a, int b);
int main(void)
{
    int n, i, j, sumA;				//假设A得到的永远是较少的那个
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {	//i代指第i个物品
        scanf("%d", &W[i]);
        sum += W[i];
    }
    for (i = 1; i <= n; i++) {
        for (j = sum / 2; j >= 1; j--) {//j分别代指第i个物品和背包剩余容量
            if (W[i] > j) 			//同样的，物品重量大于背包剩余容量，不偷
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + W[i]);
        }
    }
    sumA = dp[n][sum / 2];//个人比较喜欢单一出口
    printf("%d\n", sum - 2 * sumA);//因为A总是得到较少的那个，不需要再加上绝对值
    return 0;
}
int max(int a, int b) {
    int m = a;
    if (a < b) m = b;
    return m;
}
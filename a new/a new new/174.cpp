#include<cstdio>
#include<cmath>
using namespace std;
int w[200];
int n;
int sum, minsum = 40000;
void dfs(int c) {
    if (c == n) {
        minsum = abs(sum) < abs(minsum) ? sum : minsum;
    } else if (c == 0) {
        sum += w[c];
        dfs(c + 1);
    } else {
        for (int i = 0;i < 2;i++) {
            if (i == 1) {
                sum += w[c];
                dfs(c + 1);
                sum -= w[c];
            } else {
                sum -= w[c];
                dfs(c + 1);
                sum += w[c];
            }
        }
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &w[i]);
    }
    dfs(0);
    printf("%d", abs(minsum));
}
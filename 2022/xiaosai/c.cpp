#include<iostream>
#include<cstring>
const int N = 5010;
bool a[N][21];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        memset(a, 0, sizeof a);
        int n, k;
        scanf("%d %d", &n, &k);
        for (int i = 0;i < n;i++) {
            char str[N];
            scanf("%s", str);
            for (int j = 0;str[j] != 0;j++) {
                a[i][str[j] - 97] = true;
            }
        }
        int res = 0;
        for (int i = 0;i < n;i++) {
            for (int j = i + 1;j < n;j++) {
                int flag = 0;
                for (int k = 0;k < 20;k++) {
                    if (a[i][k] == true && a[j][k] == true) {
                        flag++;
                    }
                }
                if (flag == k) {
                    res++;
                }
            }
        }
        printf("%d\n", res);
    }
}
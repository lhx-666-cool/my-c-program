#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 55;
int a[N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        memset(a, 0, sizeof a);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
        }
        int sum = 0, flag = 0;
        for (int i = 0;i < n;i++) {
            if (sum == a[i]) {
                int j = upper_bound(a + i, a + n, a[i - 1]) - a;
                if (j == n) {
                    printf("NO\n");
                    flag = 1;
                    break;
                }
                sum += a[j] - a[i - 1];
                swap(a[i - 1], a[j]);
            }
            sum += a[i];
        }
        if (flag == 0) {
            printf("YES\n");
            for (int i = 0;i < n;i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

    }
}

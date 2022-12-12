#include "stdio.h"
int main() {
    int m, n, x;
    int i, j, k;
    int res[100][100];
    int head;
    scanf("%d %d", &m, &n);
    for (i = 0;i < m;i++) {
        head = 0;
        k = 0;
        for (j = 0;j < n;j++) {
            scanf("%d", &x);
            if (x == 0) {
                head++;
                k = 0;
            }
            if (x == 1) {
                res[i][head] += 1000000;
                if (k == 0) {
                    res[i][head] += (j + 1) * 1000;
                }
                k++;
            }
        }
    }
    int temp;
    for (i = 0;i < m;i++) {
        for (j = 0;j < n;j++) {
            for (k = j + 1;k < n;k++) {
                if (res[i][j] < res[i][k]) {
                    temp = res[i][j];
                    res[i][j] = res[i][k];
                    res[i][k] = temp;
                }
            }
        }
    }
    int chongfu, suoying;
    for (i = 0;i < m;i++) {
        if (res[i][0] == 0) {
            printf("-1 -1\n");
        } else {
            chongfu = res[i][0] / 1000000;
            suoying = (res[i][0] - chongfu * 1000000) / 1000;
            printf("%d %d\n", suoying - 1, suoying + chongfu - 2);
        }
    }
}
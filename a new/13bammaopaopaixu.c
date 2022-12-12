#include<stdio.h>
int main() {
    int n, k;
    int i, j;
    int a[110];
    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    int t = 0;
    int flag = 0;
    for (i = 0;i < n;i++) {
        flag = 0;
        int t = 0;
        for (j = 0;j < n - i - 1;j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                flag = 1;
            }
        }
        // if (flag == 0) {
        //     break;
        // }
        if (i == k - 1) {
            break;
        }
    }
    for (i = 0;i < n;i++) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
}
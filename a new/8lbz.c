#include<stdio.h>
int main() {
    int t, n, i, k, j, flag;
    int b[999] = { 0 }, a[999];
    scanf("%d%d", &t, &n);
    for (i = 0;i < t;i++) {
        for (j = 0;j < n;j++) {
            for (k = 0;k < n;k++) {
                scanf("%d", &a[k]);
            }
            for (flag = 0;flag < j;flag++) {
                if (a[flag] != 0) {
                    b[i] = 1;
                }
            }
        }
    }
    for (i = 0;i < t;i++) {
        if (b[i] == 0) {
            printf("YES\n");
        } else if (b[i] == 1) {
            printf("NO\n");
        }
    }
}
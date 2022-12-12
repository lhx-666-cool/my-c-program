#include "stdio.h"

int main() {
    int n, k, f, i, j, a[1000] = { 0 }, flag, max = 0, num[99] = { 0 }, ii = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &k);
        for (j = 1; j <= k; j++) {
            scanf("%d", &flag);
            a[ii] = flag;
            ii++;
        }
    }
    for (i = 1; i <= 999; i++) {
        if (a[i] >= max) {
            max = a[i];
        }
    }
    for (i = 1;i <= 999;i++) {
        if (max == a[i]) {
            num[ii] = i;
            ii++;
        }
    }
    printf("%d %d", i, a[i]);
}
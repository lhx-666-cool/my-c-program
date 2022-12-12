#include "stdio.h"
int main() {
    int x, max, min, sum = 0, n, zhong;
    scanf("%d", &n);
    if (n % 2 == 1) {
        for (int i = 0;i < n;i++) {
            scanf("%d", &x);
            if (i == 0) {
                max = x;
            }
            if (i == n - 1) {
                min = x;
            }
            if (i == n / 2) {
                zhong = x;
            }
        }
    } else {
        for (int i = 0;i < n;i++) {
            scanf("%d", &x);
            if (i == 0) {
                max = x;
            }
            if (i == n - 1) {
                min = x;
            }
            if (i == n / 2 || i == (n / 2 - 1)) {
                sum += x;
            }
        }
        zhong = sum / 2;

    }
    int t;
    if (max < min) {
        t = max;
        max = min;
        min = t;
    }
    printf("%d %d %d", max, zhong, min);
}
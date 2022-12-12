#include<stdio.h>

int main() {
    int n, i = 0, ii = 0;
    int res[999];
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (i = 0, ii = 0; i < n; i++, ii += 2) {
            res[i] = n * n - n + 1 + ii;
        }
    }
    if (n % 2 == 1) {
        for (i = 0, ii = 0; i < n; i++, ii += 2) {
            res[i] = n * n - n + 1 + ii;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
}
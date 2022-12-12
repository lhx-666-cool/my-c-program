#include <stdio.h>
#define MAXN 101

int max(int a[], int m, int n);
int min(int a[], int m, int n);

int main(void)
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    if (n >= 2 && n <= MAXN - 1) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("max = %d\n", max(a, 0, n - 1));
        printf("min = %d\n", min(a, 0, n - 1));
    } else {
        printf("Invalid Value.\n");
    }

    return 0;
}

int max(int a[], int m, int n)
{
    if (n == m) {
        return a[n];
    } else if (a[m] >= a[n]) {
        return max(a, m, n - 1);
    } else if (a[n] >= a[m]) {
        return max(a, m + 1, n);
    }
    return 0;
}
int min(int a[], int m, int n) {
    if (n == m) {
        return a[m];
    } else if (a[m] <= a[n]) {
        return min(a, m, n - 1);
    } else if (a[n] <= a[m]) {
        return min(a, m + 1, n);
    }
    return 0;
}

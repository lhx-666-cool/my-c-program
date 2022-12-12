#include "stdio.h"
#include <math.h>
int main() {
    int n;
    int a[1000];
    int i, b = 0, c, d, m, t;
    scanf("%d", &n);
    for (i = 1;i <= n;i++) {
        scanf("%d", a[i]);
    }
    for (i = 1;i < n;i++) {
        for (m = i + 1;m < n;m++) {
            if (a[i] > a[m]) {
                t = a[m];
            }
        }
    }
}
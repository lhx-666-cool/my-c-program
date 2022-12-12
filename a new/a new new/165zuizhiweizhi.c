#include "stdio.h"
int main() {
    int n;
    scanf("%d", &n);
    int max = -99999, maxi, x;
    for (int i = 0;i < n;i++) {
        scanf("%d", &x);
        if (x >= max) {
            max = x;
            maxi = i;
        }
    }
    printf("%d %d %d", n, max, maxi);
}
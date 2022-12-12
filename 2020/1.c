#include "stdlib.h"
#include "stdio.h"
int cmp(const void* a, const void* b) {
    int x = *(int*)a, y = *(int*)b;
    return y - x;
}
int main() {
    int n, x[100010];
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &x[i]);
    }
    qsort(x, n, 4, cmp);
    printf("Bogosort:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", x[i]);
    }
}
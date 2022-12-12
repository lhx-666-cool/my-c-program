#include "stdio.h"
#include "stdlib.h"
int func(const void* x, const void* y) {
    int a = *(int*)x;
    int b = *(int*)y;
    return a - b;
}
int main() {
    int n;
    scanf("%d", &n);
    int x[999];
    for (int i = 0;i < n;i++) {
        scanf("%d", &x[i]);
    }
    qsort(x, n, sizeof(int), func);
    double sum = 0;
    for (int i = 1;i < n - 1;i++) {
        sum += x[i];
    }
    printf("%.2f", sum / (n - 2));
}
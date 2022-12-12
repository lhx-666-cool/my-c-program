#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int cmpfun(const void* x, const void* y) {
    char a = *(char*)x, b = *(char*)y;
    return a - b;
}
int main() {
    char x[99];
    scanf("%s", x);
    int len = strlen(x);
    qsort(x, len, 1, cmpfun);
    printf("%s", x);
}
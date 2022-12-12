#include "stdio.h"
#include "stdlib.h"
int cmpfun(const void* x, const void* y) {
    int a = *(int*)x, b = *(int*)y;
    return b - a;
}
int main() {
    char s[50001] = "aa";
    char t[50001] = "a";
    /*-----------------------------*/
    int values[50001] = { 0 };
    int heads = -1;
    int valuet[50001] = { 0 };
    int headt = -1;
    for (int i = 0;s[i] != 0;i++) {
        values[++heads] = s[i];
    }
    for (int i = 0;t[i] != 0;i++) {
        valuet[++headt] = t[i];
    }
    qsort(values, heads + 1, sizeof(int), cmpfun);
    qsort(valuet, headt + 1, sizeof(int), cmpfun);
    for (int i = 0;values[i] != 0 && valuet[i] != 0;i++) {
        if (values[i] != valuet[i]) {
            return 0;
        }
    }
    return 1;
}
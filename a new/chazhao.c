//
// Created by liu on 2022/11/5.
//
#include "stdio.h"
int main() {
    int x;
    int n;
    int ci = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    int shuru[99];
    for (int i = 0;i < x;i++) {
        scanf("%d", &shuru[i]);
    }
    for (int i = 0;i < x;i++) {
        if (n == shuru[i]) {
            printf("%d ", i);
            ci++;
        }
    }
    if (ci == 0)
        printf("-1");
re:return 0;
}
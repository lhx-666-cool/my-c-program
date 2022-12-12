//
// Created by liu on 2022/10/27.
//
#include "stdio.h"

int main() {
    int i, n, sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum * i;
    }
    printf("%d", sum);

}
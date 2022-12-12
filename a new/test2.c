//
// Created by liu on 2022/10/27.
//
#include "stdio.h"

int main() {
    int s, n = 0, i;
    scanf("%d", &s);
    for (i = 1; i <= s; i++) {
        n = n + i * i;
    }
    printf("%d", n);
}
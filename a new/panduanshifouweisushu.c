//
// Created by liu on 2022/10/27.
//
#include "stdio.h"

int main() {
    int x, i, ii;
    scanf("%d", &x);
    if (x == 1) {
        ii = 1;
        printf("no");
    }
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            printf("no");
            ii = 1;
            break;
        }
    }
    if (ii == 0) {
        printf("yes");
    }
}
//
// Created by liu on 2022/10/27.
//
#include<stdio.h>

int main() {
    int a, b, n;
    scanf("%d", &a);
    if (a <= 0 || a == 1)
        printf("no");
    if (a > 2) {
        for (n = 2; n < a; n++) {
            if (a % n == 0) {
                printf("no");
                break;
            } else {
                printf("yes");
                break;
            }
        }
    } else if (a == 2) printf("yes");
    return 0;
}
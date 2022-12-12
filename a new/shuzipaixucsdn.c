//
// Created by liu on 2022/11/5.
//
#include<stdio.h>

int shu(int a) {
    int sum = 0;
    while (a != 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}

int main() {
    int shu(int a);
    int n, a, m, i, j, b[100], c[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        c[i] = shu(b[i]);
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (c[i] > c[j] || (c[i] == c[j] && b[i] < b[j])) {
                a = b[i];
                m = c[i];
                b[i] = b[j];
                c[i] = c[j];
                b[j] = a;
                c[j] = m;
            }
        }
    for (i = 0; i < n; i++) {
        printf("%d %d\n", b[i], c[i]);
    }
    return 0;
}

#include<stdio.h>
#include "math.h"

int func(int m, int n) //求最大公约数
{
    int tmp;
    m = abs(m);
    n = abs(n);
    if (m == n)
        return m;
    if (m < n) {
        tmp = m;
        m = n;
        n = tmp;
    }
    while (m % n != 0) {
        tmp = m;
        m = n;
        n = tmp % n;
    }
    return n;
}

int main() {
    int a, b, re;
    scanf("%d %d", &a, &b);
    if (a == 0) {
        re = b;
    } else if (b == 0) {
        re = a;
    } else {

        re = func(a, b);
    }
    printf("%d", re);
}
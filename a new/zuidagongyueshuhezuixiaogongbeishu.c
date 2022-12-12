#include<stdio.h>

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
    int m, n, temp, i;
    int y, b;
    scanf("%d%d", &m, &n);
    if (m < n) {
        temp = m;
        m = n;
        n = temp;
    }
    for (i = m; i > 0; i++)
        if (i % m == 0 && i % n == 0) {
            b = i;
            break;
        }
    y = func(m, n);
    printf("%d %d", y, b);
    return 0;
}
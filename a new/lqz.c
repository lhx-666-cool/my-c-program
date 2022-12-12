#include<stdio.h>

#include <math.h>

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
    int a, b, c, d; //两个分数的分子和分母
    int he, mu, zi; //分母和分子
    char o = '+';
    printf("请输入第1个分数：");
    scanf("%d/%d", &a, &b);
    printf("请输入第2个分数：");
    scanf("%d/%d", &c, &d);
    he = func(b, d); //求最大公约数
    mu = b * d / he;
    if (o == '+')
        zi = a * (mu / b) + c * (mu / d);
    else
        zi = a * (mu / b) - c * (mu / d);
    if (zi != 0) {
        if (zi / mu == 1) {
            printf("1\n");
        } else {
            if (zi % mu == 0) {
                printf("%d\n", zi / mu);
            } else {
                he = func(zi, mu);
                zi = zi / he;
                mu = mu / he;
                printf("%d/%d+%d/%d=%d/%d", a, b, c, d, zi, mu);
            }
        }
    } else
        printf("%d/%d+%d/%d=0\n", a, b, c, d);

    return 0;
}
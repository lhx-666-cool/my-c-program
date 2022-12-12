#include<stdio.h>
double fun(double n) {
    int i;
    for (i = 1;i < n;i++) {
        n *= i;
    }
    return n;
}
int main() {
    double m, n, re;
    scanf("%lf %lf", &m, &n);
    re = fun(m) / fun(n) / fun(m - n);
    printf("%.2f", re);
}
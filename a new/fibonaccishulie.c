#include<stdio.h>
int fib(int n) {
    int f[999];
    f[0] = 7;
    f[1] = 11;
    for (int i = 2;i <= 100;i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main() {
    int x;
    scanf("%d", &x);
    int n;
    n = fib(x);
    printf("%d", n);
}
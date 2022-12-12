#include<stdio.h>
int func(int x) {
    int res = 1;
    if (x == 1) {
        return res;
    }
    res = x * func(x - 1);

}
int main() {
    int n, res1, res2 = 0;
    int i = 0, ii = 0;
    scanf("%d", &n);
    res1 = func(n);
    for (i = 1;i <= n;i++) {
        res2 = res2 + func(i);
    }
    printf("%d %d %d", n, res1, res2);
}
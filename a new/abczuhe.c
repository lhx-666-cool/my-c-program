#include<stdio.h>
int main() {
    int n;
    int a, b, c;
    scanf("%d", &n);
    int i = 0, ii = 0, iii = 0;
    for (i = 0;i <= 9;i++) {
        a = i;
        for (ii = 0;ii <= 9;ii++) {
            b = ii;
            for (iii = 0;iii <= 9;iii++) {
                c = iii;
                if ((a * 100 + b * 10 + c + c * 100 + b * 10 + a) == n) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
}
#include<stdio.h>

int main() {
    int i = 0;
    float sum = 0;
    int n;
    float a = 1, b = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum = sum + a / b;
        }
        if (i % 2 == 0) {
            sum = sum - a / b;
        }
        a++;
        b += 2;
    }
    printf("%.3f", sum);
}
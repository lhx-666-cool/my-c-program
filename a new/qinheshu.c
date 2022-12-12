#include<stdio.h>

int main() {
    int n1, n2;
    int i, ii;
    int n1c = 0, n2c = 0;
    int sum1 = 0, sum2 = 0;
    scanf("%d %d", &n1, &n2);
    for (i = 1; i < n1; i++) {
        if (n1 % i == 0) {
            sum1 = sum1 + i;
            n1c++;
        }
    }
    for (i = 1; i < n2; i++) {
        if (n2 % i == 0) {
            sum2 = sum2 + i;
            n2c++;
        }
    }
    if (sum2 == n1 && sum1 == n2) {
        printf("yes ");
    } else {
        printf("no ");
    }
    printf("%d %d", n1c, n2c);
}
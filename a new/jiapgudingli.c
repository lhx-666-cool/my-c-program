#include<stdio.h>
int main() {
    int n = 0;
    int c = 0;
    scanf("%d", &n);
    while (1)
    {
        if (n == 1) {
            break;
        }
        if (n % 2 == 0) {
            n = n / 2;
            c++;
            continue;
        }
        if (n % 2 == 1) {
            n = n * 3 + 1;
            c++;
            continue;
        }
    }
    printf("%d", c);
}
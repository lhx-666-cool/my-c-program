#include<stdio.h>

int main() {
    int a, b, x, y, z;
    char c;

    scanf("%d,%d,%c", & a, & b, & c);

    if (a >= -100000 && b <= 100000 && c >= '0' && c <= '9') {

        x = a / b ;
        y = a % b % c;
        z = a / b % c;
        printf("%d,%d,%d", x, y, z);

     }
    return 0;
}
#include<stdio.h>

int main() {
    int a;
    char b, c;
    scanf("%d,%c,%c", &a, &b, &c);
    printf("%d", a + b + c);
    printf(" %c %d", b + c, b + c);
}
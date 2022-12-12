#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", & a, & b);
    int he, cha, ji, shang;
    he = a + b;
    cha = a - b;
    ji = a * b;
    shang = a / b;
    printf("%d\n%d\n%d\n%d\n", he, cha, ji, shang);
}
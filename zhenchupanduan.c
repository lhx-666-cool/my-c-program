#include <stdio.h>

int main() {
    int a, b, shang, yu;
    scanf("%d %d", & a, & b);
    if (a % b == 0) {
        printf("yes");
    } else {
        yu = a % b;
        shang = (a - yu) / b;
        printf("%d %d", shang, yu);
    }
}
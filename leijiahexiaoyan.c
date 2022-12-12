#include <stdio.h>

int main() {
    char a[101];
    int i, sum = 0, ma;
    for (i = 0;i <= 100;i++) {
        a[i] = 0;
    }
    gets(a);
    for (i = 0;i <= 99;i++) {
        sum = sum + a[i];
    }
    ma = sum % 0X100;
    printf("%d", ma);
}

#include "stdio.h"
#include "ctype.h"
int main() {
    char a[99];
    gets(a);
    for (int i = 0;a[i] != 0;i++) {
        if (isupper(a[i])) {
            a[i] = 90 - a[i] % 65;
        }
        if (islower(a[i])) {
            a[i] = 122 - a[i] % 97;
        }
    }
    puts(a);
}
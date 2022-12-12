#include "stdio.h"
int main() {
    char x[99];
    gets(x);
    char m;
    scanf("%c", &m);
    int i;
    for (i = 0;x[i] != 0;i++) {
        if (x[i] == m) {
            x[i] = 1;
        }
    }
    for (int j = 0;j <= i;j++) {
        if (x[j] != 1) {
            printf("%c", x[j]);
        }
    }
}
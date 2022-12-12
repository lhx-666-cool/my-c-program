#include "stdio.h"
int main() {
    char x[99];
    char new[99];
    scanf("%s", &x);
    int i;
    for (i = 0;x[i] != 0;i++) {
    }
    int count = i - 1;
    for (i = 0;x[i] != 0;i++) {
        new[i] = x[count - i];
    }
    new[i] = 0;
    printf("%s", new);
}
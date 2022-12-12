#include<stdio.h>
#include "ctype.h"
int main() {
    char x[99];
    scanf("%s", &x);
    int n[99] = tolower(x);
    printf("%s", n);
}
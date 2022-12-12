#include "stdio.h"
int main() {
    char inp[999];
    int x;
    gets(inp);
    scanf("%d", &x);
    for (int i = x + 1;inp[i] != 0;i++) {
        printf("%c", inp[i]);
    }
}
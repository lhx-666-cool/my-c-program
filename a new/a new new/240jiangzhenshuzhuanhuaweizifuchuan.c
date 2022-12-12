#include<stdio.h>
#include<stdlib.h>
int main() {
    char ch[99];
    int x;
    scanf("%d", &x);
    itoa(x, ch, 10);
    printf("%s", ch);
}
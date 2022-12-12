#include "stdio.h"
int main() {
    int x;
    char ch = 'a';
    scanf("%c", &ch);
    scanf("%d", &x);
    for (int i = 0;i < x;i++) {
        for (int ii = 0;ii < x - i;ii++)
        {
            printf(" ");
        }
        for (int ii = 0;ii <= i;ii++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}
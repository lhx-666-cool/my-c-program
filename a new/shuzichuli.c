#include "stdio.h"
#include "stdlib.h"

char fun(char xch[99]) {
    int sum = 0;
    if (xch[1] == 0) {
        return xch[0];
    }
    if (xch[1] != 0) {
        for (int i = 0; xch[i] != 0; i++) {
            sum = sum + xch[i] - 48;
        }
        itoa(sum, xch, 10);
        fun(xch);
    }
}

int main() {
    int x;
    scanf("%d", &x);
    char xch[99];
    itoa(x, xch, 10);
    char re;
    re = fun(xch);
    printf("%c", re);
}
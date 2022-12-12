#include "stdio.h"
#include "ctype.h"
int main() {
    char inp[110] = { 0 }, outp[110] = { 0 };
    scanf("%s", inp);
    int head = -1, i = 0, j = 0, re = 0, reeng = 0;
    for (i = 0;inp[i - 1] != 0 || i == 0;i++) {
        if ((isalpha(inp[i])) || inp[i] == 0) {
            for (j = 0;j < re - 1;j++) {
                outp[++head] = reeng;
            }
            re = 0;
            outp[++head] = inp[i];
            reeng = inp[i];
        }
        if (inp[i] >= '0' && inp[i] <= '9') {
            re = re * 10 + inp[i] - 48;
        }
    }
    printf("%s\n", outp);
}
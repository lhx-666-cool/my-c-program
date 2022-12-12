#include<stdio.h>

int main() {
    int old[99], new [99];
    int min = 999;
    int geshu, i = 0, n = 0, m = 0, o = 0, p = 0, q = 0;
    char huanhang;
    while (1 == 1) {
        scanf("%d", & old[i]);
        scanf("%c", & huanhang);
        i++;
        if (huanhang == '\n') {
            break;
        }
    }
    geshu = i;
    for (min = 999; n < geshu;) {
        m = 0;
        for (; m < geshu;) {
            if (old[m] <= min) {
                min = old[m];
            }
            m++;
            p = 0;
        }
        for (; p < geshu; p++) {
            if (old[p] == min) {
                old[p] = 999;
                q++;
                if (q == 1) {
                    q = 0;
                    break;
                };
            };
        };
        new [n] = min;
        n++;
        min = 99999;
    };
    while (o < geshu) {
        printf("%d", new [o]);
        o++;
        if (o < geshu - 1);
        printf(" ");
    };
    return 0;
}
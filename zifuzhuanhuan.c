#include <stdio.h>

int main() {
    char c[999];
    int n = 1;
    int i = 0;
    scanf("%c", & c[0]);
    while (1 == 1) {
        scanf("%c", & c[n]);
        if (c[n] == '\n') {
            break;
        }
        n++;
        if (c[n - 1] == ' ') {
            n--;
        }
    }
    while (i < n) {
        if (c[i] >= 65 && c[i] <= 86) {
            c[i] = c[i] + 4;
        } else if (c[i] >= 87 && c[i] <= 90) {
            c[i] = c[i] - 22;
        } else if (c[i] >= 97 && c[i] <= 118) {
            c[i] = c[i] + 4;
        } else if (c[i] >= 119 && c[i] <= 122) {
            c[i] = c[i] - 22;
        }
        printf("%c", c[i]);
        i++;
    }


}
#include "stdio.h"
#include "ctype.h"
int main() {
    char x[99];
    gets(x);
    for (int i = 0;x[i] != 0;i++) {
        if (islower(x[i])) {
            x[i] = toupper(x[i]);
        }
    }
    int t;
    for (int i = 0;x[i] != 0;i++) {
        if (isupper(x[i])) {
            for (int j = 0;x[j] != 0;j++) {
                if (isupper(x[j])) {
                    if (x[i] < x[j]) {
                        t = x[i];
                        x[i] = x[j];
                        x[j] = t;
                    }
                }
            }
        }
    }
    puts(x);
}
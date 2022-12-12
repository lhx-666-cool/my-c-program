#include <stdio.h>
#include <math.h>

int main() {
    int number1 = 2;
    int number2 = 1;
    int i = 2;
    int yu = 0;
    int cishu = 0;
    int shuru = 0;
    scanf("%d", & shuru);
    for (; number1 <= shuru; number1++) {
        for (; i <= sqrt(number1);) {
            if (number1 % i == 0) {
                yu++;
            };
            i++;
        };
        i = 2;
        if (yu == 0) {
            if (number1 - number2 == 2) {
                cishu++;
            }
            number2 = number1;
        };
        yu = 0;
    };
    printf("%d", cishu);
}
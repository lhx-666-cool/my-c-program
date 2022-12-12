#include<stdio.h>

int main() {
    int day = 0, i = 0;
    int n = 0, max = -20, min = 40;
    scanf("%d\n", & day);
    while (i < day) {
        scanf("%d", & n);
        if (n > max) {
            max = n;
        };
        if (n < min) {
            min = n;
        };
        i++;
    }
    printf("%d", max - min);
}
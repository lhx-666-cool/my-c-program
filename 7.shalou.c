#include <stdio.h>

int main() {
    int number = 1;
    char * str = "*";
    scanf("%d %c", & number, & str);
    number = number + 1;
    int one = 1;
    int line = 0;
    int one_2 = 0;
    for (;; one = one + 2) {
        one_2 = one * 2;
        if (number < one_2) {
            break;
        }
        number = number - one_2;
        line = line + 1;
    };
    int line_p = 0;
    int kong = 0;
    for (; line_p < line - 1; line_p = line_p + 1) {
        int one_l = 0;
        for (one_l = one - 2; one_l >= 1; one_l--) {
            printf("%c", str);
        }
        printf("\n");
        one = one - 2;
        int a = 0;
        for (; a < kong + 1;) {
            printf(" ");
            a++;
        }
        kong++;
    }
    int kong_new = kong - 2;
    int line_l = 1;
    int one_l = -1;
    for (line_p = line; line_l <= line_p; line_l++) {

        one_l = one_l + 2;
        for (int a = 1; a <= one_l; a++) {
            printf("%c", str);
        }
        printf("\n");
        // one = one - 2;
        int a = 0;
        // printf("kong %d",kong);
        while (a < kong_new + 1) {
            printf(" ");
            a++;
        }
        // printf("kongnew %d",kong_new);
        kong_new = kong_new - 1;
    }
    printf("%d", number);
    return 0;
}
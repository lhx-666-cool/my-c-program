#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder, yuann;
    scanf("%d", & num);
    yuann = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    if (yuann == reversedNumber) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
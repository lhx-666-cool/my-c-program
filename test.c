#include <stdio.h>

 int main () {
    int n, reversedNumber = 0, remainder, yuann;
    // char *true = "true";
    // char *false = "false";
    // printf("输入数字: ");
    scanf("%d", &n);
    yuann = n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    if (yuann == reversedNumber) {
        printf("true");
    } ;
    if (yuann != reversedNumber) {
        printf("false");
    };
    return 0;
 }
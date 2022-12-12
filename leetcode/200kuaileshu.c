#include "stdio.h"
int sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 10) * (x % 10);
        x /= 10;
    }
    return sum;
}
int main() {
    int n = 5;
    /*----------------------*/
    while (1) {
        n = sum(n);
        if (n == 4) {
            // return 0;
            printf("f");
        }
        if (n == 1) {
            printf("t");
        }
    }
}

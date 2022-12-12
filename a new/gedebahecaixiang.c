#include<stdio.h>

int function(int x) {
    int ii = 0;
    int ci = 0;
    for (ii = 1; ii <= x; ii++) {
        if (x % ii == 0) {
            ci++;
        }
    }
    if (ci == 2) {
        return 1;
    } else {
        return 2;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int num1, num2;
    for (i = 2; i < n; i++) {
        if (function(i) == 1) {
            num1 = i;
            num2 = n - num1;
            if (function(num2) == 1) {
                printf("%d %d", num1, num2);
                break;
            } else {
                continue;
            }
        }

    }
}
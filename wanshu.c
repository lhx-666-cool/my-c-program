#include <stdio.h>
#include<math.h>

int main() {
    int a, b;
    int i = 2, sum;
    scanf("%d %d", & a, & b);
    for (; a <= b; a++) {
        sum = 1;
        for (i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                sum = sum + i + a / i;
                if (a / i == i) {
                    sum = sum - i;
                }
            }
        }
        if (sum == a && a != 1) {
            printf("%d\n", a);
        }
    }
}
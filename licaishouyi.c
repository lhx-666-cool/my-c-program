#include <stdio.h>

int main() {
    double x, t, i = 0;
    scanf("%lf%lf", & x, & t);
    for (; i < t && i < 20; i++) {
        if (x < 5 && x >= 0) {
            x = x * 1.03;
        } else if (x >= 5 && x < 20) {
            x = x * 1.03500;
        } else if (x >= 20 && x < 50) {
            x = x * 1.04;
        } else if (x >= 50 && x < 200) {
            x = x * 1.045;
        } else if (x >= 200) {
            x = x * 1.05;
        }


    }
    printf("%.2f", x);
}
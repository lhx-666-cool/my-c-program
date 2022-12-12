#include<stdio.h>

int main() {
    double m, n;
    scanf("%lf", & m);
    if (m <= 110) {
        n = m * 0.5;
        printf("%.2f", n);
    } else if (m > 110 && m <= 210) {
        n = 110 * 0.5 + (m - 110) * 0.55;
        printf("%.2f", n, m - 110);
    } else if (m > 210) {
        n = 110 * 0.5 + 100 * 0.55 + (m - 210) * 0.70;
        printf("%.2f", n, m - 210);
    }
    return 0;
}
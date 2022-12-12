#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float p, v;
    scanf("%d %d %d", & a, & b, & c);
    if (c * c == a * a + b * b) {
        p = (a + b + c) / 2;
        v = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.0f", 2*v);
    } else {
        printf("no");
    }
}
#include <stdio.h>
#include <math.h>
int main() {
    double x, h;
    scanf("%lf %lf", &x, &h);
    double y = sqrt(x * x + h * h);
    printf("%f", y);
}
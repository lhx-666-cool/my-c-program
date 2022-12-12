#include <stdio.h>

int main() {
    float l, h, w, v;
    scanf("%f  %f  %f", &l, &w, &h);
    v = l * h * w;
    printf("%.3f\n", l * w * h);
    return 0;
}
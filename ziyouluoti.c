#include<stdio.h>

#include<math.h>

int main() {
    float g = 9.8;
    int t;
    float h;
    scanf("%d", & t);
    if (t < 0) {

    } else {
        h = 1000 - 0.5 * g * t * t;
        if (h >= 0 && h <= 1000) {
            printf("%.2f", h);
        }
        if (h < 0) {
            h = 0;
            printf("%.2f", h);
        }
    }
}
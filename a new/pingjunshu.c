#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    float num[999];
    int i;
    float sum = 0;
    for (i = 0; i < c; i++) {
        scanf("%f", &num[i]);
    }
    for (i = 0; i < c; i++) {
        sum = sum + num[i];
    }
    printf("%.2f", sum / c);

}
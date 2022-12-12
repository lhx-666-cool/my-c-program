#include<stdio.h>

int main() {
    int n, i = 0, l = 0;
    float t[999];
    float p[999];
    float sum = 0, ave, bisum = 0;
    char a;
    scanf("%d\n", & n);
    while (1 == 1) {
        scanf("%f", & t[i]);
        scanf("%f", & p[i]);
        scanf("%c", & a);
        i++;
        if (a == '\n') {
            break;
        }

    }
    while (l <= i - 1) {
        sum = sum + t[l] * p[l];
        bisum = bisum + t[l];
        l++;
    }
    ave = sum / bisum;
    printf("%.2f %.2f", sum, ave);

}
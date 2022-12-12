#include<stdio.h>

int main() {
    float chenji;
    scanf("%f", &chenji);
    if (chenji >= 90) {
        printf("A", chenji);
    }
    if (chenji >= 80 && chenji < 90) {
        printf("B", chenji);
    }
    if (chenji >= 70 && chenji < 80) {
        printf("C", chenji);
    }
    if (chenji >= 60 && chenji < 70) {
        printf("D", chenji);
    }
    if (chenji <   60) {
        printf("E", chenji);
    }
    return 0;
}
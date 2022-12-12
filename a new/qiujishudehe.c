#include<stdio.h>
int main() {
    int i = 0, n = 0;
    int num[99];
    int sum = 0;
    char ch;
    for (i = 0;1;i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
    }
    for (n = 0;n <= i;n++) {
        if (num[n] % 2 == 1) {
            sum = sum + num[n];
        }
    }
    printf("%d", sum);
}
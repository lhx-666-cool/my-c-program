#include<stdio.h>

int main() {
    int n = 0, i = 0, ge1 = 0, ge2 = 0, ge3 = 0, ji = 0, ou = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            ou++;
        } else {
            ji++;
        }
        if (i % 3 == 0) {
            ge1++;
        }
        if (i % 5 == 0) {
            ge2++;
        }
        if (i % 7 == 0) {
            ge3++;
        }
    }
    printf("%d %d %d %d %d", ji, ou, ge1, ge2, ge3);
}
#include <stdio.h>

int main() {
    int zushu, a[99], b[99], re;
    int i, ii;
    int c;
    scanf("%d", &zushu);
    for (i = 0; i < zushu; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    ii = i - 1;
    for (i = 0; i <= ii; i++) {
        c = 0;
        for (; a[i] <= b[i]; a[i]++) {
            if (a[i] % 3 == 2 && a[i] % 7 == 1) {
                printf("%d ", a[i]);
                c++;
            }
        }
        if (c == 0) {
            printf("none");
        }
        printf("\n");
    }
    return 0;
}
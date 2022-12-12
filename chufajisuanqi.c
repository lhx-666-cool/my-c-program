#include <stdio.h>

int main() {
    int m, n, q, r, rq, rr;
    scanf("%d %d %d %d", & m, & n, & q, & r);
    rq = m / n;
    rr = m % n;
    if (rq == q && rr == r) {
        printf("yes");

    } else {
        printf("%d %d", rq, rr);
    }
}
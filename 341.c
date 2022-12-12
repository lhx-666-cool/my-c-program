#include<stdio.h>

int main() {
    float n, t, p, e = 0, me = 0, ping = 0, mt = 0, ci = 0, a = 0;
    scanf("%f\n%f %f", &n, &t, &p);
    ci = ci + 1;
    me = t * p;
    e = e + me;
    mt = mt + t;
    while (ci < n) {
        scanf(" %f %f", &t, &p);
        ci = ci + 1;
        me = t * p;
        e = e + me;
        mt = mt + t;

    }
    ping = e / mt;
    printf("%.2f %.2f", e, ping);

    return 0;
}
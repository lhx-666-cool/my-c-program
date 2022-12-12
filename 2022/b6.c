#include "stdio.h"
int main() {
    int n;
    int val[11000] = { 0 };
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        int t, max = 0, a, b, c, bac;
        scanf("%d", &t);
        for (a = 0;a < t;a++) {
            bac = t - a;
            if (bac % 2 == 1) {
                b = bac / 2;
                c = b + 1;
            } else {
                b = bac / 2 - 1;
                c = bac / 2 + 1;
            }
            if (a * 2 <= b && a * 2 <= c) {
                if (max < a) {
                    max = a;
                }
            } else {
                break;
            }
        }
        val[i] = max;
    }
    for (int i = 0;i < n;i++) {
        printf("%d\n", val[i]);
    }
}
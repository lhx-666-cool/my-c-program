#include "stdio.h"
int main() {
    int tt;
    for (tt = 100000;tt < 1000000;tt++) {
        int a2, b, c, t;
        t = tt;
        b = t / 2 + 3;
        c = t / 2 + 2;
        int max = 0;
        for (int i = 0;;i++) {
            if (i % 2 == 0) {
                b -= 2;
                a2 = (t - b - c) * 2;
                // if (a2 / 2 > t / 5) {
                //     continue;
                // }
                if (a2 <= b && a2 <= c) {
                    if (max <= a2) {
                        max = a2;
                    }
                } else {
                    break;
                }
            }
            if (i % 2 == 1) {
                c -= 2;
                a2 = (t - b - c) * 2;
                // if (a2 / 2 > t / 5) {
                //     continue;
                // }
                if (a2 <= b && a2 <= c) {
                    if (max <= a2) {
                        max = a2;
                    }
                } else {
                    break;
                }
            }
        }
        int ttt, re;
        ttt = tt;
        re = ttt / 5;
        if ((ttt - re) % 2 == 0 && re != 0) {
            re--;
        }
        if (max / 2 != re) {
            printf("%d", t);
        } else {
            printf(".");
        }

    }
}
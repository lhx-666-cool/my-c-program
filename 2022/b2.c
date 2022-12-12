#include "stdio.h"
int main() {
    int result[100000];
    int n;
    scanf("%d", &n);
    for (int x = 0;x < n;x++) {
        int a2, b, c, t;
        scanf("%d", &t);
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
        // int max = (t - b - c);
        result[x] = max / 2;
    }
    for (int x = 0;x < n;x++) {
        printf("%d\n", result[x]);
    }
}
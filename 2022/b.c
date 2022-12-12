#include "stdio.h"
int main() {
    int result[110000] = { 0 };
    int n;
    scanf("%d", &n);
    for (int x = 0;x < n;x++) {
        int t;
        scanf("%d", &t);
        int j = (int)(((t - 1) / 30.0) + 0.5);
        // b = t / 2 + 3;
        // c = t / 2 + 2;
        // int max = 0;
        // for (int i = 0;;i++) {
        //     if (i % 2 == 0) {
        //         b -= 2;
        //         a2 = (t - b - c) * 2;
        //         if (a2 <= b && a2 <= c) {
        //             if (max <= a2) {
        //                 max = a2;
        //             }
        //         } else {
        //             break;
        //         }
        //     }
        //     if (i % 2 == 1) {
        //         c -= 2;
        //         a2 = (t - b - c) * 2;
        //         if (a2 <= b && a2 <= c) {
        //             if (max <= a2) {
        //                 max = a2;
        //             }
        //         } else {
        //             break;
        //         }
        //     }
        // }
        // int max = (t - b - c);
        result[x] = (t - 1) / 6 + j;
        if (t % 2 == 1) {
            result[x] --;
        }
    }
    for (int x = 0;x < n;x++) {
        printf("%d\n", result[x]);
    }
}
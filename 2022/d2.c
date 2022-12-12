#include "stdio.h"
#include "stdlib.h"
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int* gezi = (int*)calloc(1000010, sizeof(int));
    // int gezi[99] = { 0 };
    for (int i = 1;i <= n;i++) {
        scanf("%d", &gezi[i]);
    }
    for (int i = n;i >= 1;i--) {
        if (gezi[i] == 0 || i >= n) {
            gezi[i] = i;
        } else {
            gezi[i] = gezi[i + gezi[i]];
        }
    }
    int maxtou = 0;
    for (int i = 0;i < n;) {
        int min = gezi[i + 1];
        for (int j = i + 1;j <= i + m && j <= n;j++) {
            if (gezi[j] < min) {
                min = gezi[j];
            }
            // if (gezi[j] - j == 0) {
            //     break;
            // }
            // if (min >= n) {
            //     break;
            // }
        }
        i = min;
        maxtou++;
    }
    int mintou = 0;
    for (int i = 0;i < n;) {
        int max = gezi[i + 1];
        for (int j = i + 1;j <= i + m && j <= n;j++) {
            if (gezi[j] > max) {
                max = gezi[j];
            }
            if (max >= n) {
                break;
            }
        }
        i = max;
        mintou++;
    }
    printf("%d %d", maxtou, mintou);
}
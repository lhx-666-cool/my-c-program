#include "stdio.h"
int main() {
    int n, inp[999];
    int min = 9999, max = -9999, maxn = 0, minn = 0;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &inp[i]);
        if (inp[i] >= max) {
            max = inp[i];
            maxn = i;
        }
        if (inp[i] < min) {
            min = inp[i];
            minn = i;
        }
    }
    int t;
    t = inp[maxn];
    inp[maxn] = inp[minn];
    inp[minn] = t;
    for (int i = 0;i < n;i++) {
        printf("%d ", inp[i]);
    }
}
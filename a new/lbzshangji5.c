#include <stdio.h>

int main() {
    int shuru;
    int i = 0;
    int n, max = 0, min = 1000000, maxn = 0, minn = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &shuru);
        if (shuru == max) {
            maxn++;
        }
        if (shuru == min) {
            minn++;
            continue;
        }
        if (shuru > max) {
            max = shuru;
            maxn = 1;
        }
        if (shuru <= min) {
            min = shuru;
            minn = 1;
            continue;
        }
    }

    printf("%d %d\n%d %d", min, minn, max, maxn);
}
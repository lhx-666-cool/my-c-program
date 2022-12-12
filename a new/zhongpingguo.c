#include<stdio.h>
#include <math.h>
int main() {
    int n, i;
    int yuan, min = 99999, shen = 0;
    int shu[99];
    scanf("%d", &n);
    scanf("%d", &yuan);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &shu[i]);
    }
    shen = yuan;
    for (i = 0;i < n;i++) {
        shen = shen + shu[i];
        if (shu[i] < min) {
            min = shu[i];
        }
    }
    printf("%d ", shen);
    for (i = 0;i < n;i++) {
        if (min == shu[i]) {
            printf("%d", i + 1);
        }
    }

}
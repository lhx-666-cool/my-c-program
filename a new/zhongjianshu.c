#include<stdio.h>

int main() {
    int i, shu[1000], n, y, x, la, z = 0, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &shu[i]);
    }
    for (i = 0; i < n; i++) {
        y = 0;
        x = 0;
        for (j = 0; j < n; j++) {
            if (i != j) {
                if (shu[j] > shu[i])y++;
                else if (shu[j] < shu[i])x++;
            }
        }
        if (y == x) {
            la = shu[i];
            z = 1;
        }
    }
    if (z == 1)printf("%d", la);
    else if (z == 0)printf("-1");
    return 0;
}
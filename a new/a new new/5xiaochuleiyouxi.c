#include "stdio.h"
int main() {
    int m, n, shuru[999][99], resx[999], resy[999], head = -1;
    scanf("%d %d", &n, &m);
    int i, j;
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            scanf("%d", &shuru[i][j]);
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < m - 2;j++) {
            if (shuru[i][j] == shuru[i][j + 1] && shuru[i][j] == shuru[i][j + 2]) {
                resx[++head] = j;
                resy[head] = i;
                resx[++head] = j + 1;
                resy[head] = i;
                resx[++head] = j + 2;
                resy[head] = i;
            }
        }
    }
    for (i = 0;i < m;i++) {
        for (j = 0;j < n - 2;j++) {
            if (shuru[j][i] == shuru[j + 1][i] && shuru[j][i] == shuru[j + 2][i]) {
                resx[++head] = i;
                resy[head] = j;
                resx[++head] = i;
                resy[head] = j + 1;
                resx[++head] = i;
                resy[head] = j + 2;
            }
        }
    }
    for (i = 0; i <= head; i++)
    {
        shuru[resy[i]][resx[i]] = 0;
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            printf("%d ", shuru[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main() {
    int m, n, res[300] = { 0 };
    int i = 0;
    int x;
    scanf("%d %d", &m, &n);
    for (i = 0;i < m * n;i++) {
        scanf("%d", &x);
        res[x]++;
    }
    for (i = 0;i < 300;i++) {
        if (res[i] != 0) {
            printf("%d %d\n", i, res[i]);
        }
    }
}
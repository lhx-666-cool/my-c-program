#include "stdio.h"
void hollowPyramid(int n);
int main() {
    int n;
    scanf("%d", &n);
    hollowPyramid(n);
    return 0;
}
void hollowPyramid(int n) {
    int i = 0, j = 0, head = -1;
    char outp[1000] = { 0 };
    for (i = 0;i < n * n * 2;i++) {
        outp[++head] = ' ';
    }
    for (i = 0;i < n - 1;i++) {
        outp[(i) * (2 * n) + n - i - 1] = i + 49;
        outp[(i) * (2 * n) + n + i - 1] = i + 49;
        outp[(i) * (2 * n) + n - 1 + n] = '\n';

    }
    for (j = (i) * (2 * n) + n - i - 1;j <= (i) * (2 * n) + n + i - 1;j++) {
        outp[j] = i + 49;
    }
    printf("%s", outp);
}

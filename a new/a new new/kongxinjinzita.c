#include "stdio.h"
void hollowPyramid(int n);
int main() {
    int n;
    scanf("%d", &n);
    hollowPyramid(n);
    return 0;
}
void hollowPyramid(int n) {
    int i = 0, j = 0, zhongjiandekongge = -1;
    for (i = 1;i <= n;i++) {
        for (j = 0;j < n - i;j++) {
            printf(" ");
        }
        printf("%d", i);
        for (j = 0;j < zhongjiandekongge;j++) {
            if (i <= n - 1) {
                printf(" ");
            } else if (i == n) {
                printf("%d", i);
            }
        }
        zhongjiandekongge += 2;
        if (i != 1) {
            printf("%d\n", i);
        } else {
            printf("\n");
        }
    }
}
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main() {
    int re[99][99];
    int numRows;
    scanf("%d", &numRows);
    re[0][0] = 1;
    for (int i = 1;i < numRows;i++) {
        re[i][0] = 1;
        for (int j = 1;j <= i;j++) {
            re[i][j] = re[i - 1][j - 1] + re[i - 1][j];
        }
    }
    for (int i = 0;i < numRows;i++) {
        for (int j = 0;j <= i;j++) {
            printf("%d ", re[i][j]);
        }
        printf("\n");
    }
}
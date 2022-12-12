#include "stdio.h"
#include "math.h"
#include "stdlib.h"
// int c(int x, int y) {
//     int reu = 1, red = 1, re = 1, i = 0;
//     for (i = x;i > x - y;i--) {
//         reu = reu * i;
//     }
//     for (i = y;i > 0;i--) {
//         red = red * i;
//     }
//     re = reu / red;
//     return re;
// }
int main() {
    int numRows = 5;
    /*-----------------*/
    int re[99][99];
    // int** re = (int**)calloc(numRows, sizeof(int*));
    // re[0] = (int*)calloc(1, sizeof(int));
    re[0][0] = 1;
    for (int i = 1;i < numRows;i++) {
        // re[i] = (int*)calloc(i + 1, sizeof(int));
        re[i][0] = 1;
        for (int j = 1;j <= i;j++) {
            re[i][j] = re[i - 1][j - 1] + re[i - 1][j];
        }
    }
    /*----------------*/
}
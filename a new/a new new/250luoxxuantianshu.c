#include "stdio.h"
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int i = 0, j = -1;
    int re[99][99];
    int xia = m - 1, you = n - 1, shang = 0, zuo = 0, sta = 1;
    for (int x = 1;x <= m * n;x++) {
        if (sta == 1) {
            j++;
        }
        if (sta == 2) {
            i++;
        }
        if (sta == 3) {
            j--;
        }
        if (sta == 4) {
            i--;
        }
        re[i][j] = x;
        if (j == you && i == shang && sta != 2) {
            sta = 2;
            shang++;
        }
        if (i == xia && j == you && sta != 3) {
            sta = 3;
            you--;
        }
        if (j == zuo && i == xia && sta != 4) {
            sta = 4;
            xia--;
        }
        if (i == shang && j == zuo && x != 1 && sta != 1) {
            sta = 1;
            zuo++;
        }
    }
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            printf("%d ", re[i][j]);
        }
        printf("\n");
    }
}
#include "stdio.h"
int main() {
    int m;
    int x[99][99];
    scanf("%d", &m);
    int i = 0, j = 0;
    for (i = 0;i < m;i++) {
        for (j = 0;j < m;j++) {
            scanf("%d", &x[i][j]);
        }
    }
    int value[99] = { 0 }, head = 0;
    for (i = 0;i < m;i++) {
        for (j = 0;j < m;j++) {
            value[head] += x[i][j];
        }
        head++;
    }
    for (i = 0;i < m;i++) {
        for (j = 0;j < m;j++) {
            value[head] += x[j][i];
        }
        head++;
    }

    for (i = 0;i < m;i++) {
        value[head] += x[i][i];
        value[head + 1] += x[i][m - i - 1];
    }
    head++;
    int temp;
    for (i = 0;i <= head;i++) {
        for (j = i + 1;j <= head;j++) {
            if (value[i] < value[j]) {
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }
    for (i = 0;i <= head;i++) {
        printf("%d ", value[i]);
    }
}
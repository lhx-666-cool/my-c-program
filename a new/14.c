#include "stdio.h"
int main() {
    int value[99][2], head = 0, n, i = 0, j = 0, temp, inp[99];
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%d", &inp[i]);
    }
    for (i = 0;i < n;i++) {
        for (j = i + 1;j < n;j++) {
            if (inp[i] > inp[j]) {
                temp = inp[i];
                inp[i] = inp[j];
                inp[j] = temp;
            }
        }
    }
    value[0][0] = inp[0];
    value[0][1] = 1;
    for (i = 1;i < n;i++) {
        if (value[head][0] != inp[i]) {
            value[++head][0] = inp[i];
            value[head][1] = 1;
        } else {
            value[head][1]++;
        }
    }
    for (i = 0;i <= head;i++) {
        printf("%d:%d\n", value[i][0], value[i][1]);
    }
}
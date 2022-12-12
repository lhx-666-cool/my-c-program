#include "stdio.h"
int main() {
    int value[99], head = 0, n, i = 0, j = 0, temp, inp[99], valuenew[99];
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
    value[0] = inp[0];
    valuenew[0] = 1;
    for (i = 1;i < n;i++) {
        if (value[head] != inp[i]) {
            value[++head] = inp[i];
            valuenew[head] = 1;
        } else {
            valuenew[head]++;
        }
    }
    for (i = 0;i <= head;i++) {
        printf("%d:%d\n", value[i], valuenew[i]);
    }
}
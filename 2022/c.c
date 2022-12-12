#include "stdio.h"
#include<stdio.h>
int main() {
    // int c[99][99] = { 0 };
    int n, t, i, j;
    scanf("%d %d", &n, &t);
    int snake[5500][2] = { {0} };
    for (i = 0;i < n;i++) {
        scanf("%d %d", &snake[i][0], &snake[i][1]);
        // c[snake[i][0]][snake[i][1]] = 1;
    }
    int step[5500] = { 0 };
    for (i = 0;i < t;i++) {
        scanf("%d", &step[i]);
    }
    for (i = 0;i < t;i++) {
        // c[snake[n - 1][0]][snake[n - 1][1]] = 0;
        for (j = n - 1;j >= 1;j--) {
            snake[j][0] = snake[j - 1][0];
            snake[j][1] = snake[j - 1][1];
        }
        if (step[i] == 0) {
            snake[0][0]--;
        }if (step[i] == 1) {
            snake[0][0]++;;
        }if (step[i] == 2) {
            snake[0][1]--;
        }if (step[i] == 3) {
            snake[0][1]++;
        }
        // if (c[snake[0][0]][snake[0][1]] == 1) {
        //     printf("%d", i);
        //     return 0;
        // }
        for (int j = 1;j < n;j++) {
            if (snake[0][0] == snake[j][0] && snake[0][1] == snake[j][1]) {
                printf("%d", i);
                return 0;
            }
        }
        // c[snake[0][0]][snake[0][1]] = 1;
    }
    printf("%d", t);
}
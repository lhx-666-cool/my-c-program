//
// Created by liu on 2022/11/4.
//
#include "stdio.h"

int main() {
    char ch;
    scanf("%c", &ch);
    int hang = ch - 'A' + 1;
    int hang2 = hang - 1;
    int hang_3;
    char ch_n = 'A';
    for (int i = 1; i <= hang; i++) {
        ch_n = 'A';
        for (int j = 1; j <= hang2; j++) {
            printf(" ");
        }
        hang2--;
        hang_3 = (i * 2 - 1) / 2 + 1;
        for (int k = 1; k <= i * 2 - 1; k++) {
            if (k < hang_3) {
                printf("%c", ch_n);
                ch_n++;
            } else {
                printf("%c", ch_n);
                ch_n--;
            }

        }
        printf("\n");

    }
}
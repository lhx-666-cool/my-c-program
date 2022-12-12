//
// Created by liu on 2022/11/5.
//
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

float quxiaoshu(int x) {
    int y = x - floor(x);
    return y;
}

int main() {
    int n;
    scanf("%d", &n);
    char shuru[999][999];
    int zhen[999];
    int sum[999] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%s", shuru[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; shuru[i][j] != 0; j++) {
            sum[i] = sum[i] + shuru[i][j] - 48;
        }
    }
    for (int i = 0; i < n; i++) {
        zhen[i] = atoi(shuru[i]) + sum[i] * 1000000;
    }
    int max = -1;
    int xiangtong = 0;
    int tong1 = 0, tong2 = 0;
    for (int j = 0; j < n; j++) {
        max = -1;
        xiangtong = 0;
        tong1 = 0;
        tong2 = 0;
        for (int i = 0; i < n; i++) {
            if (max < zhen[i] / 1000000) {
                max = zhen[i] / 1000000;
                xiangtong = 0;
            }
            if (max == zhen[i] / 1000000) {
                xiangtong++;
            }
        }
        if (xiangtong == 1) {
            for (int k = 0; k < n; k++) {
                if (max == zhen[k] / 1000000) {
                    printf("%.0f %.0f\n", zhen[k] - floor(zhen[k] / 1000000) * 1000000, floor(zhen[k] / 1000000));
                    zhen[k] = -2;
                }
            }
        }
        if (xiangtong == 2) {
            for (int k = 0; k < n; k++) {
                if (max == zhen[k] / 1000000) {
                    if (tong1 == 0) {
                        tong1 = zhen[k];
                        zhen[k] = -2;
                    } else {
                        tong2 = zhen[k];
                        zhen[k] = -2;
                    }

                }

            }
            if (tong1 > tong2) {
                printf("%d %d\n%d %d\n", tong2 - (tong2 / 1000000) * 1000000, tong2 / 1000000,
                    tong1 - (tong1 / 1000000) * 1000000, tong1 / 1000000);
            } else {
                printf("%d %d\n%d %d\n", tong1 - (tong1 / 1000000) * 1000000, tong1 / 1000000,
                    tong2 - (tong2 / 1000000) * 1000000, tong2 / 1000000);
            }
        }
    }
}
#include "stdio.h"
int main() {
    int x, sum = 0;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            scanf("%d", &x);
            if (i == j) {
                sum += x;
            }
        }
    }
    printf("%d", sum);
}
#include "stdio.h"
int main() {
    int x[10];
    for (int i = 0;i < 10;i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 1;i < 10;i++) {
        printf("%d ", x[i] / x[i - 1]);
    }

}
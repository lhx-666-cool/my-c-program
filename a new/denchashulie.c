#include "stdio.h"
#include "math.h"
int paixu(int* p, int x) {
    int temp = 0;
    for (int i = 0;i < x;i++) {
        for (int j = i + 1;j < x;j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    return 0;
}
int main() {
    int x;
    scanf("%d", &x);
    int shuru[99] = { 0 };
    for (int i = 0; i < x; i++) {
        scanf("%d", &shuru[i]);
    }
    paixu(shuru, x);
    for (int i = 2; i < x; i++) {
        if (shuru[i] - shuru[i - 1] != shuru[i - 1] - shuru[i - 2]) {
            printf("no");
            goto re;
        }
    }
    printf("%d", abs(shuru[1] - shuru[0]));
re: return 0;
}
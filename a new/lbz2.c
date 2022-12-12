#include<stdio.h>

int main() {
    int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int s, k;
    for (s = 0, k = 0; k < 4; k++) {
        s += *(a[1] + k);
        int* m = (a[1] + k);
        int* p = a[1];
        int* q = &a[1][1];
        printf("%d\n", s);
    }
}
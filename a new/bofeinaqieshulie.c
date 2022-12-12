#include "stdio.h"
int function(int x) {
    int ii = 0;
    int ci = 0;
    for (ii = 1; ii <= x; ii++) {
        if (x % ii == 0) {
            ci++;
        }
    }
    if (ci == 2) {
        return 1;
    } else {
        return 2;
    }
}
int main() {
    int arr[40];
    int i = 0;
    arr[0] = 1;
    arr[1] = 1;
    for (i = 2;i < 40;i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int x;
    scanf("%d", &x);
    x--;
    if (function(arr[x]) == 1) {
        printf("yes");
    } else {
        printf("%d", arr[x]);
    }
}
#include "stdio.h"
int main() {
    int lowLimit = 1, highLimit = 10;
    /*--------------------------------*/
    int arr[50] = { 0 };
    for (int i = lowLimit;i <= highLimit;i++) {
        int sum = 0;
        int x = i;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        arr[sum]++;
    }
    int max = arr[0];
    for (int i = 0;i < 50;i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
    printf("%d", max);
}
#include "stdio.h"
int main() {
    int digits[99] = { 9 };
    int digitsSize = 1;
    /*-------------------*/
    int re[99] = { 0 };
    for (int i = digitsSize;i >= 1;i--) {
        re[i] = digits[i - 1];
    }
    re[digitsSize]++;
    for (int i = digitsSize;i >= 1;i--) {
        if (re[digitsSize] >= 10) {
            re[digitsSize] = re[digitsSize] - 10;
            re[digitsSize - 1]++;
        }
    }
    if (re[0] == 0) {
        for (int i = 0;i < digitsSize;i++) {
            re[i] = re[i + 1];
        }
    }
}
#include "stdio.h"
int main() {
    int prices[99] = { 7,1,5,3,6,4 };
    int pricesSize = 6;
    /*---------------------------------*/
    int min = prices[0];
    int maxmoney = 0, max = 0;
    int head = 0;
    for (int i = 0;i < pricesSize;i++) {
        if (prices[i] < min && i != pricesSize - 1) {
            min = prices[i];
            head++;
        }
        if ((prices[i] - min) > maxmoney) {
            maxmoney = prices[i] - min;
            if (maxmoney > max) {
                max = maxmoney;
            }
        }
    }
    // max = maxmoney[0];
    // for (int i = 0;i < 100;i++) {
    //     if (maxmoney[i] > max) {
    //         max = maxmoney[i];
    //     }
    // }
    printf("%d", max);
}
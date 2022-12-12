//
// Created by liu on 2022/11/5.
//
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    n--;
    int old[999];
    for (int i = 0;i <= n;i++) {
        scanf("%d", &old[i]);
    }
    //输入数组
    int new[999][2];//新的数组
    int iii = 0;
    int iiii = 0;
    for (int i = 0;i <= n;i++) {
        iiii = 0;
        for (int ii = 0;ii <= iii;ii++) {
            if (old[i] == new[ii][0]) {     //遍历old数组，若new数组中用old数组中的某个值，
                new[ii][1]++;           //就给new数组中那个值所对应的次数+1
                iiii++;                 //iiii代表是否有相同的数字，有的话iiii=1，传给下方if
            }
        }

        if (iiii == 0) {
            new[iii][0] = old[i];         //进过监测，若没有相同的数字，iiii就会为0
            new[iii][1] = 1;              //iiii为0时，没有相同的数字，就把这个数字列入new数组中，并让对应的次数为1
            iii++;
        }
    }
    int min = 99999;
    for (int j = 0;j < iii;j++) {
        min = 99999;
        for (int jj = 0;jj < iii;jj++) {
            if (new[jj][0] <= min) {
                min = new[jj][0];
            }
        }
        for (int jj = 0;jj < iii;jj++) {
            if (new[jj][0] == min) {
                printf("%d:%d\n", new[jj][0], new[jj][1]);
                new[jj][0] = 99999;
            }
        }
    }
}
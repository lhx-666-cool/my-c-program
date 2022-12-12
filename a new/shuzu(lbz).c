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
    int max = -1;
    for (int i = 0;i <= iii;i++) {            //找出次数最大值
        if (new[i][1] > max) {
            max = new[i][1];
        }
    }
    for (int i = 0;i <= iii;i++) {            //打印次数最大值
        if (max == new[i][1]) {
            printf("%d %d", new[i][0], new[i][1]);
        }
    }
}
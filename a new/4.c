#include <stdio.h>
int qiushuweihe(int x) {
    int sum = 0;
    for (int i = 0;x != 0;i++) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main() {
    int a, b;
    int min = 99999, shuweimin = 99999;
    int max = -99999, shuweimax = -999999;
    int minre, maxre;
    scanf("%d %d", &a, &b);
    for (int i = a;i <= b;i++) {
        if (qiushuweihe(i) < min) {
            min = qiushuweihe(i);
            minre = i;
        }
    }
    for (int i = b;i >= a;i--) {
        if (qiushuweihe(i) > max) {
            max = qiushuweihe(i);
            maxre = i;
        }
    }
    printf("%d %d %d %d", minre, maxre, qiushuweihe(minre), qiushuweihe(maxre));
}
#include<stdio.h>
#include<math.h>

int main() {
    int oy, y, n, x, year, t[4], i, j, k;
    int a[4];
    int l = 0;
    int min = 9999;
    scanf("%d%d", &oy, &n);
    y = oy;
    int weishu = 4;
again:if (y < 1000 && y >= 100) {
    weishu = 3;
} else if (y < 100 && y >= 10) {
    weishu = 2;
} else if (y >= 0 && y < 10) {
    weishu = 1;
} else {
    weishu = 4;
}
// int yuanlaideweishu;
// yuanlaideweishu = weishu;
for (i = y; i < 3000; i++) {
    a[0] = i % 10;
    a[1] = (i / 10) % 10;
    a[2] = (i / 100) % 10;
    a[3] = (i / 1000) % 10;
    l = 0;
    min = 99999;
    t[0] = 0;
    t[1] = 0;
    t[2] = 0;
    t[3] = 0;
    for (j = 0; j < weishu + 1 && j < 4; j++) {
        for (k = 0; k < weishu + 1 && k < 4; k++) {
            if (a[j] != a[k]) {
                t[l]++;
            }
        }
        l++;
        for (int m = 0; m < l; m++) {
            if (min >= t[m]) {
                min = t[m];
            }
        }
    }
    int cishu = 0;
    if (min == n - 1) {
        x = i - oy;
        printf("%d %04d", x, i);
        cishu++;
        break;
    }
    if (cishu == 0) {
        if (i == 9 || i == 99 || i == 999) {
            y = pow(10, weishu);
            goto again;
        }
    }
}
}
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
    int n;
    int cishu = 0;
    int num[99];
    int ii = 0;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        if (function(i) == 1) {
            cishu++;
            num[ii] = i;
            ii++;
        }
    }
    printf("%d\n", cishu);
    for (int iii = 0;iii < cishu;iii++) {
        printf("%d ", num[iii]);
    }
}
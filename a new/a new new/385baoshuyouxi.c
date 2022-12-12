#include "stdio.h"
int is7(int x) {
    if (x % 7 == 0) {
        return 1;
    }
    while (x > 0) {
        if (x % 10 == 7) {
            return 1;
        } else {
            x /= 10;
        }
    }
    return 0;
}
int main() {
    int n, i;
    scanf("%d", &n);
    int stu[3] = { 0 };
    for (i = 1;i <= n;i++) {
        if (is7(i)) {
            stu[(i - 1) % 3]++;
            n++;
        }
    }
    printf("%d %d %d", stu[0], stu[1], stu[2]);
}
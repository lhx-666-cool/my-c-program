#include"stdio.h"
int jieshen(int x) {
    int re = 1;
    if (x == 1) {
        return 1;
    } else {
        re = jieshen(x - 1) * x;
        return re;
    }

}
int main() {
    char x[99];
    int sum = 0;
    scanf("%s", &x);
    for (int i = 0;x[i] != 0;i++) {
        if (x[i] - 48 != 0) {
            sum += jieshen(x[i] - 48);
        }
    }
    printf("%d", sum);

}
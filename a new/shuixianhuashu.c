#include <stdio.h>
#include<math.h>

int function(int a, int b) {
    int turn;
    int ci = 0;
    if (b < a) {
        turn = b;
        b = a;
        a = turn;
    }
    int aa;
    int i = 0;
    int aeve[99];
    int sum = 0;
    int pow_n = 0;
    for (; a <= b; a++) {
        aa = a;
        sum = 0;
        for (i = 0; i < 20; i++) {
            aeve[i] = aa % 10;
            aa = aa / 10;
        }
        if (a >= 0 && a <= 9) {
            pow_n = 1;
            continue;
        } else if (a >= 10 && a <= 99) {
            pow_n = 2;
            continue;
        } else if (a >= 100 && a <= 999) {
            pow_n = 3;
        } else if (a >= 1000 && a <= 9999) {
            pow_n = 4;
        }
        for (i = 0; i < 20; i++) {
            sum += pow(aeve[i], pow_n);
        }
        if (a == sum) {
            ci++;
        }
    }
    return ci;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x;
    x = function(a, b);
    printf("%d", x);
}
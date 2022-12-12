#include "stdio.h"
int jie(int x) {
    int sum = 1;
    if (x == 1) {
        int sumnew = sum;
        // sum = 1;
        return sumnew;
    } else {
        sum = sum * x;
        x--;
        jie(x);
    }
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    float p;
    p = (double)jie(m) / (double)jie(n) / (double)jie(m - n);
    printf("%.2f", p);

}
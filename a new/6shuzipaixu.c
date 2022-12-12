#include"stdio.h"
int fun(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main() {
    int x[99];
    int n, temp;
    scanf("%d", &n);
    int i = 0, j = 0;
    for (i = 0;i < n;i++) {
        scanf("%d", &x[i]);
    }
    for (i = 0;i < n;i++) {
        for (j = i + 1;j < n;j++) {
            if ((fun(x[i]) < fun(x[j])) || (fun(x[i]) == fun(x[j]) && x[i] > x[j])) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (i = 0;i < n;i++) {
        printf("%d %d\n", x[i], fun(x[i]));
    }

}
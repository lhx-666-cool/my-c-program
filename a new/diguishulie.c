double function(int n) {
    static double a = 1;
    a = 1 / (1 + a);
    if (n > 2) {
        n--;
        function(n);
    }
    if (n == 2) {
        return a;
    }
    if (n == 1) {
        a = 1;
        return a;
    }
}
#include <stdio.h>
int main() {
    int n;
    double a;
    scanf("%d", &n);
    a = function(n);
    printf("%.6f", a);
}
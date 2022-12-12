#include <stdio.h>

int main() {
    int time[99];
    int i = 0;
    int n = 0;
    int che = 0;
    int ci = 0;
    int yu = 0;
    int yuche = 0;
    while (1 == 1) {
        scanf("%d", & time[i]);
        i++;
        if (time[i - 1] == 0) {
            break;
        }
    }
    i--;
    while (n <= i - 1) {
        if (time[n] % 90 == 0) {
            ci = time[n] / 90;
            che = ci * 60 * 3;
        } else {
            yu = time[n] % 90;
            time[n] = time[n] - yu;
            ci = time[n] / 90;
            if (yu <= 60) {
                yuche = yu * 3;
                che = ci * 60 * 3 + yuche;
            } else {
                ci++;
                che = ci * 60 * 3;
            }
        }
        n++;
        printf("%d ", che);
    }
}
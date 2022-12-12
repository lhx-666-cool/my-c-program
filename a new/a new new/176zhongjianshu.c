#include "stdio.h"
int main() {
    int n, inp[1100], temp, num;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &inp[i]);
    }
    for (int i = 0;i < n;i++) {
        for (int j = i;j < n;j++) {
            if (inp[i] > inp[j]) {
                temp = inp[i];
                inp[i] = inp[j];
                inp[j] = temp;
            }
        }
    }
    num = inp[n / 2];
    for (int i = 0;i < n;i++) {
        if ((inp[i] == num && inp[n - 1 - i] != num) || (inp[i] != num && inp[n - 1 - i] == num)) {
            printf("-1");
            return 0;
        }
    }
    printf("%d", num);
}
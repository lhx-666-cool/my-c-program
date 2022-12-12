#include<stdio.h>
void dectobin(int n) {
    int outp[999] = { 0 };
    int head = -1, i = 0;
    for (i = 0;(n >> i) > 0;i++) {
        outp[++head] = (n >> i) & 1;
    }
    for (i = head;i >= 0;i--) {
        printf("%d", outp[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    dectobin(n);
    return 0;
}
#include<stdio.h>
void jinwei(int* n) {
    if (*n == 1) {
        if (*(n + 1) == 0) {
            *n = 0;
            *(n + 1) = 1;
        } else if (*(n + 1) == 1) {
            *n = 0;
            jinwei((n + 1));
        }
    }
}
void dectobin(int n) {
    int i = 0;
    int outp[1000] = { 0 };
    outp[0] = 0;
    int* p = outp;
    for (i = 1;i <= n;i++) {
        if (outp[0] == 0) {
            outp[0] = 1;
        } else if (outp[0] == 1) {
            jinwei(p);
        }
    }
    for (i = 999;i >= 0;i--) {
        if (outp[i] != 0) {
            break;
        }
    }
    for (;i >= 0;i--) {
        printf("%d", outp[i]);
    }
    if (n == 0) {
        printf("0");
    }
}
int main() {
    int x;
    scanf("%d", &x);
    dectobin(x);
    return 0;
}
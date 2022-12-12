#include "stdio.h"
int main() {
    int fi[50];
    fi[0] = 1;
    fi[1] = 1;
    for (int i = 2;i < 50;i++) {
        fi[i] = fi[i - 1] + fi[i - 2];
    }
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        printf("%d ", fi[i]);
    }
}
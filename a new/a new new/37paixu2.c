#include "stdio.h"
int main() {
    int x, i, j, n, ou[99], ji[99], ouhead = -1, jihead = -1;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            ou[++ouhead] = x;
        } else {
            ji[++jihead] = x;
        }
    }
    int temp;
    for (i = 0;i <= ouhead;i++) {
        for (j = i + 1;j <= ouhead;j++) {
            if (ou[i] < ou[j]) {
                temp = ou[j];
                ou[j] = ou[i];
                ou[i] = temp;
            }
        }
    }
    for (i = 0;i <= jihead;i++) {
        for (j = i + 1;j <= jihead;j++) {
            if (ji[i] < ji[j]) {
                temp = ji[j];
                ji[j] = ji[i];
                ji[i] = temp;
            }
        }
    }
    for (i = 0;i <= ouhead;i++) {
        printf("%d ", ou[i]);
    }
    for (i = 0;i <= jihead;i++) {
        printf("%d ", ji[i]);
    }
}
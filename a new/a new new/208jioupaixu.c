#include "stdio.h"
#include "stdlib.h"
int cmpfun(const void* x, const void* y) {
    int a = *(int*)x, b = *(int*)y;
    return a - b;
}
int main() {
    int inp[99];
    int ji[99], jihead = -1;
    int ou[99], ouhead = -1;
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &inp[i]);
        if (inp[i] % 2 == 0) {
            ou[++ouhead] = inp[i];
        } else {
            ji[++jihead] = inp[i];
        }
    }
    qsort(ji, jihead + 1, 4, cmpfun);
    qsort(ou, ouhead + 1, 4, cmpfun);
    for (int i = 0;i <= jihead;i++) {
        printf("%d ", ji[i]);
    }
    printf("  ");
    for (int i = 0; i <= ouhead; i++)
    {
        printf("%d ", ou[i]);
    }


}
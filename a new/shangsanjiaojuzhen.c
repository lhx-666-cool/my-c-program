#include"stdio.h"
int main() {
    int dcjzdgs;//daicejuzhendegeshu
    scanf("%d", &dcjzdgs);
    int i, j, k;//各种循环变量
    int jz[99][99];//jz = juzhen
    int result[99];
    for (i = 0;i < dcjzdgs;i++) {
        int n;
        scanf("%d", &n);
        for (j = 0;j < n;j++) {
            for (k = 0;k < n;k++) {
                scanf("%d", &jz[j][k]);
            }
        }
        for (j = 0;j < n;j++) {
            for (k = 0;k < j;k++) {
                if (jz[j][k] != 0) {
                    result[i] = 0;
                    goto re;
                }
            }
        }
        result[i] = 1;
    re:;
    }
    for (i = 0;i < dcjzdgs;i++) {
        if (result[i] == 0) {
            printf("NO\n");
        } else if (result[i] == 1) {
            printf("YES\n");
        }
    }
}
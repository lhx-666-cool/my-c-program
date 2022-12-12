#include<stdio.h>
int main() {
    char x[100];
    int i = 0;
    int res = 0;
    int dazimu = 0, xiaozimu = 0, shuzi = 0, zifu = 0;
    gets(x);
    for (i = 0;x[i] != 0;i++) {
        if ((x[i] >= 'A' && x[i] <= 'Z')) {
            if (dazimu == 0) {
                res++;
            }
            dazimu++;
        } else if ((x[i] >= 'a' && x[i] <= 'z')) {
            if (xiaozimu == 0) {
                res++;
            }
            xiaozimu++;
        } else if ((x[i] >= '0' && x[i] <= '9')) {
            if (shuzi == 0) {
                res++;
            }
            shuzi++;
        } else {
            if (zifu == 0) {
                res++;
            }
            zifu++;
        }
    }
    if (i > 8) {
        res++;
    }
    printf("%d", res);
}
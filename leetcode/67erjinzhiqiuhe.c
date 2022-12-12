#include "stdio.h"
#include "string.h"
int main() {
    char a[11000] = "1111";
    char b[11000] = "1111";
    /*-------------------*/
    static char re[11000] = { '0' };
    int la = strlen(a), lb = strlen(b);
    int max = la > lb ? la - 1 : lb - 1;
    for (int i = max + 1;i >= 1;i--) {
        if (la == 0) {
            re[i] = b[--lb];
        } else if (lb == 0) {
            re[i] = a[--la];
        } else {
            re[i] = a[--la] + b[--lb] - 48;
        }
    }
    for (int i = max + 1;i >= 1;i--) {
        if (re[i] == '2') {
            re[i] = '0';
            re[i - 1] += 1;
        }
        if (re[i] == '3') {
            re[i] = '1';
            re[i - 1] += 1;
        }
    }
    // if (re[0] == '0') {
    //     for (int i = 0;i <= max + 2;i++) {
    //         re[i] = re[i + 1];
    //     }
    // }
    printf("%s", re);
}
#include "stdio.h"
int main() {
    char strs[210][210];
    int strsSize;
    scanf("%d", &strsSize);
    int ii = 0;
    for (ii = 0;ii < strsSize;ii++) {
        scanf("%s", strs[ii]);
    }
    /*-----------------------*/
    char value[220];
    int head = -1;
    int i = 0, j = 0;
    char temp;
    for (i = 0;;i++) {
        temp = strs[0][i];
        for (j = 0;j < strsSize;j++) {
            if (strs[j][i] == 0) {
                printf("%s", value);
                return 0;
            } else {
                if (temp != strs[j][i]) {
                    printf("%s", value);
                    return 0;
                }
            }
        }
        value[++head] = temp;
    }
}
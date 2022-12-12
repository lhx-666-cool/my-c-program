#include "stdio.h"
#include<ctype.h>
int main() {
    char s[999] = " ";
    /*----------------------*/
    char new[999] = { 0 };
    int head = -1;
    int i;
    for (i = 0;s[i] != 0;i++) {

        if (isalnum(s[i])) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            new[++head] = s[i];
        }
    }
    i = head;
    if (i == -1) {
        printf("t");
    }
    for (int j = 0;j <= i;j++, i--) {
        if (new[i] != new[j]) {
            printf("f");
        }
    }
    printf("t");
}
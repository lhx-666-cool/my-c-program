#include "stdio.h"
#include"string.h"
int main() {
    char ch[110];
    char maxlenstr[110] = { 0 };
    int maxlength = -1;
    while (gets(ch), strcmp(ch, "***end***") != 0) {
        int len = strlen(ch);
        if (maxlength < len) {
            strcpy(maxlenstr, ch);
            maxlength = len;
        }
    }
    int len = strlen(maxlenstr);
    printf("%d\n", len);
    printf("%s", maxlenstr);
}
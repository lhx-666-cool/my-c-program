#include "stdio.h"
#include"string.h"
int main() {
    char ch[1000][110];
    int i = 0;
    int maxlength = -1;
    int maxhang = -1;
    for (i = 0;gets(ch[i]), strcmp(ch[i], "***end***") != 0;i++) {
        int len = strlen(ch[i]);
        if (maxlength < len) {
            maxlength = len;
            maxhang = i;
        }
    }
    int len = strlen(ch[maxhang]);
    printf("%d\n", len);
    printf("%s", ch[maxhang]);
}
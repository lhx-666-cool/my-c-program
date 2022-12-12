#include "stdio.h"
#include "string.h"
int main() {
    char ch[99];
    scanf("%s", &ch);
    int len;
    len = strlen(ch) - 1;
    for (int i = 0;i <= len;i++) {
        if (ch[i] != ch[len - i]) {
            printf("no");
            goto re;
        }
    }
    int sum = 0;
    for (int i = 0;i <= len;i++) {
        sum = sum + ch[i] - 48;
    }
    printf("%d", sum);
re:return 0;
}
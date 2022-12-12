#include "stdio.h"
#include "string.h"
int main() {
    char inp[110][110], x, xx[99];
    int re = 0, i;
    for (i = 0;1;i++) {
        scanf("%s", inp[i]);
        scanf("%c", &x);
        if (x == '\n') {
            break;
        }
    }
    scanf("%s", xx);
    for (int j = 0;j <= i;j++) {
        if (strcmp(inp[j], xx) == 0) {
            re++;
        }
    }
    printf("%s %d", xx, re);
}
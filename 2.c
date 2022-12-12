#include<stdio.h>
#include <string.h> 
int main() {
    char a[1000] = { 0 };
    char b[1000] = { 0 };
    scanf("%s", a);
    scanf("%s", b);
    int len = strlen(a);
    int len2 = strlen(b);
    int i;
    int len3;
    len3 = len + len2;
    for (i = 0;i < len2;i = i + 1) {
        a[i + len] = b[i];
    }
    for (i = 0;i <= len3;i = i + 1) {
        // printf("%c", a[i]);

    }
    // puts(a);
    return 0;
}
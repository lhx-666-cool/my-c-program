#include<stdio.h>
int main() {
    char m[10];
    scanf("%s", &m);
    int i;
    for (i = 0;1;i++) {
        if (m[i] == '\0') {
            break;
        }
    }
    printf("%d", i);
}
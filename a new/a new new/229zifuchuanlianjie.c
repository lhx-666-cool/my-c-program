#include "stdio.h"
int main() {
    char x1[99], x2[99];
    char ou[99] = { 0 };
    int head = -1;
    scanf("%s\n%s", x1, x2);
    for (int i = 0;x1[i] != 0;i++) {
        ou[++head] = x1[i];
    }
    for (int i = 0;x2[i] != 0;i++) {
        ou[++head] = x2[i];
    }
    printf("%s", ou);
}
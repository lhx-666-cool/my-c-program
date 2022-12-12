#include "stdio.h"
int main() {
    char ch[99];
    scanf("%s", ch);
    int sum = 0;
    for (int i = 0;ch[i] != 0;i++) {
        if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
            sum++;
        }
    }
    printf("%d", sum);
}
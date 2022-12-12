#include<stdio.h>
int main() {
    char ch[99] = { 0 };
    scanf("%s", ch);
    int i;
    for (i = 0;ch[i] != 0;i++) {
        if (i % 2 == 0) {
            printf("%c", ch[i]);
        }
    }
}
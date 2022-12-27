#include<stdio.h>
void f(char s[]) {
    s[1] = '2';
    return;
}
int main() {
    char s[] = "111111";
    f(s);
    printf("%s", s);
}
#include<stdio.h>
#include<string.h>
int main() {
    char class[20];
    int classl = 0;
    char name;
    scanf("%s", class);
    if (!strcmp(class, "signed") || !strcmp(class, "unsigned")) {
        scanf("%s", class);
    }
    if (!strcmp(class, "int")) {
        classl = 4;
    } else if (!strcmp(class, "char")) {
        classl = 1;
    } else if (!strcmp(class, "short")) {
        classl = 2;
    } else if (!strcmp(class, "long")) {
        scanf("%s", class);
        classl = 8;
    }
    while ((name = getchar()) != '[');
    long long int x = 0;
    scanf("%lld", &x);
    long long int re;
    re = x * classl;
    if (re < 0) {
        printf("too large");
    } else {
        printf("%lld", re);
    }
}
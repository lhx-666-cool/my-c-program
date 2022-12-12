#include <stdio.h>

int main() {
    char old;
    scanf("%c", &old);
    if (old >= 65 && old <= 90) {
        old = old + 32;
    } else if (old >= 97 && old <= 122) {
        old = old - 32;
    }else{
        old = old;
    }
    printf("%c", old);
    return 0;
}
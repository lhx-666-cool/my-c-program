#include "stdio.h"
#include "string.h"
int main() {
    char s[99] = "Hello World    ";
    /*---------------------------------*/
    int length = strlen(s);
    int head = 0, i = 0;
    for (i = length - 1;s[i] == ' ';i--) {
        s[i] = 0;
    }
    for (i = 0;s[i] != 0;i++) {
        if (s[i] == ' ') {
            head = 0;
        } else {
            head++;
        }
    }

}
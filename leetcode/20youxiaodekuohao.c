#include "stdio.h"
int main() {
    char inp[1100] = { 0 };
    scanf("%s", inp);
    char outp[1100] = { 0 };
    int i = 0, head = 0;
    for (i = 0;inp[i] != 0;i++) {
        if (inp[i] == '(' || inp[i] == '[' || inp[i] == '{') {
            outp[++head] = inp[i];
        } else {
            if (inp[i] == ')') {
                if (outp[head] == '(') {
                    outp[head--] = 0;
                } else {
                    outp[++head] = inp[i];
                }
            }
            if (inp[i] == ']') {
                if (outp[head] == '[') {
                    outp[head--] = 0;
                } else {
                    outp[++head] = inp[i];
                }
            }
            if (inp[i] == '}') {
                if (outp[head] == '{') {
                    outp[head--] = 0;
                } else {
                    outp[++head] = inp[i];
                }
            }
        }
    }
    if (outp[1] == 0) {
        printf("true");
    } else {
        printf("false");
    }
}
#include<cstdio>
#include<cctype>
int main() {
    char inp[100] = { 0 };
    gets(inp);
    int outp[100] = { 0 };
    int head = -1;
    int x = 0;
    for (int i = 0;inp[i] != 0;i++) {
        if (iswdigit(inp[i])) {
            x = x * 10 + inp[i] - 48;
        } else {
            outp[++head] = x;
            x = 0;
        }
    }
    outp[++head] = x;
    head = 0;
    for (int i = 0;inp[i] != 0;i++) {
        if (inp[i] == '+') {
            head++;
        } else if (inp[i] == '-') {
            head++;
            outp[head] = -outp[head];
        } else if (inp[i] == '*') {
            outp[head] = outp[head] * outp[head + 1];
            head++;
            outp[head] = 0;
        } else if (inp[i] == '/') {
            outp[head] = outp[head] / outp[head + 1];
            head++;
            outp[head] = 0;
        }
    }
    int res = 0;
    for (int i = 0;i <= head;i++) {
        res += outp[i];
    }
    printf("%d", res);
}
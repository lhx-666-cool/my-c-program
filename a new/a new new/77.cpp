#include<cstdio>
#include<cctype>
using namespace std;
int main() {
    char inp[100] = { 0 };
    gets(inp);
    char op;
    int x = 0;
    int y = 0;
    int sta = 1;
    int isx = 1;
    for (int i = 0;inp[i] != 0;i++) {
        if (inp[i] == '+' || inp[i] == '-' || inp[i] == '*' || inp[i] == '/' || inp[i] == '%') {
            op = inp[i];
        }
        if (inp[i] == ' ') {
            sta = 0;
            if (isx == 1 && x != 0) {
                isx = 0;
            }
        } else if (inp[i] != ' ') {
            sta = 1;
        }
        if (isdigit(inp[i]) && sta == 1) {
            if (isx == 1) {
                x = x * 10 + inp[i] - 48;
            } else {
                y = y * 10 + inp[i] - 48;
            }
        }

    }
    int res;
    switch (op) {
    case '+':res = x + y;break;
    case '-':res = x - y;break;
    case '*':res = x * y;break;
    case '/':res = x / y;break;
    case '%':res = x % y;break;
    }
    printf("%d", res);
}
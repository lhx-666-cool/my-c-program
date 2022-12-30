#include<iostream>
#include<cctype>
using namespace std;
int main() {
    int x = 0;
    char inp[110];
    gets(inp);
    for (int i = 0;inp[i] != 0;i++) {
        if (isdigit(inp[i])) {
            x = x * 10 + inp[i] - 48;
        }
    }
    int out[10000] = { 0 };
    int head = -1;
    for (int i = 2;i <= x;i++) {
        while (x % i == 0) {
            out[++head] = i;
            x /= i;
        }
    }
    printf("%d", out[head]);
}
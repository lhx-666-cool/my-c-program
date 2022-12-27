#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char inp[100] = { 0 };
    char oup[100] = { 0 };
    int n;
    gets(inp);
    cin >> n;
    int head = -1;
    int len = strlen(inp);
    if (n > len) {
        puts("error");
    }
    for (int i = n - 1;inp[i] != 0;i++) {
        oup[++head] = inp[i];
    }
    puts(oup);
}
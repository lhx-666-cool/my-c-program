#include<iostream>
using namespace std;
int main() {
    char s[110] = { 0 };
    gets(s);
    int res = 0;
    for (int i = 0, j = 0;s[i] != 0;i++) {
        if (s[i] == ' ' || s[i] == '.') {
            res = max(res, i - j);
            j = i + 1;
        }
    }
    cout << res;
}
#include<stdio.h>
int solve(char* s) {
    int res = 0;
    for (int i = 0, j = 0;s[i] != 0;i++) {
        if (s[i] == s[j]) {
            res += i - j + 1;
        } else {
            j = i;
            res += 1;
        }
    }
    return res;
}
const int N = 1e5 + 10;
int main() {
    char s[N] = "abbcccaa";
    int res = solve(s);
    printf("%d", res);
    return 0;
}
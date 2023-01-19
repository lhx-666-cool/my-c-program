#include<iostream>
#include<string>
using namespace std;
string s;
int main() {
    cin >> s;
    int i = s.length() - 1;
    long long res = 0;
    long long c = 1;
    for (;i >= 0;i--) {
        res += (s[i] - 'A' + 1) * c;
        c *= 26;
    }
    printf("%lld", res);
}
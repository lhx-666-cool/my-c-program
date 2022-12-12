#include<cstdio>
#include<cctype>
#include<iostream>
using namespace std;
int main() {
    char inp[100] = { 0 };
    cin >> inp;
    int head = -1;
    int resnum = 0;
    int i;
    for (i = 0;inp[i + 1] != 0;i++) {
        if (iswdigit(inp[i])) {
            head++;
            resnum += (head + 1) * (inp[i] - 48);
        }
    }
    resnum = resnum % 11;
    if (resnum == inp[i] - 48 || (resnum == 10 && inp[i] == 'X')) {
        cout << "Right" << endl;
    } else {
        if (resnum != 10) {
            inp[i] = resnum + 48;
        } else {
            inp[i] = 'X';
        }
        cout << inp << endl;
    }
}
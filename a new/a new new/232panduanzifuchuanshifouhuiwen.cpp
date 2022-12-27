#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char inp[110] = { 0 };
    scanf("%s", inp);
    int len = strlen(inp);
    for (int i = 0, j = len - 1;i < j;i++, j--) {
        if (inp[i] != inp[j]) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
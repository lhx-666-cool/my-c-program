#include<iostream>
#include<cctype>
using namespace std;
int main() {
    int num[5] = { 0 };
    char str[110] = { 0 };
    gets(str);
    for (int i = 0;str[i] != 0;i++) {
        if (isupper(str[i])) {
            num[0]++;
        } else if (islower(str[i])) {
            num[1]++;
        } else if (str[i] == ' ') {
            num[2]++;
        } else if (isdigit(str[i])) {
            num[3]++;
        } else {
            num[4]++;
        }
    }
    cout << num[0] << " " << num[1] << " " << num[2] << " " << num[3] << " " << num[4];
}
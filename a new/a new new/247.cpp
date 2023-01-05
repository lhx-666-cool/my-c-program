#include<iostream>
using namespace std;
int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int main() {
    int y, num;
    cin >> y >> num;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        month[1] = 29;
    }
    for (int i = 0;i < 12;i++) {
        if (num - month[i] > 0) {
            num -= month[i];
        } else {
            cout << i + 1 << " " << num;
            return 0;
        }
    }
}
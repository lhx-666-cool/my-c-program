#include<iostream>
using namespace std;
int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int main() {
    int y, m, d, sum = 0;
    scanf("%d,%d,%d", &y, &m, &d);
    for (int i = 1;i < m;i++) {
        sum += mon[i - 1];
    }
    sum += d;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        if (m > 2) {
            sum++;
        }
    }
    cout << sum << endl;
}
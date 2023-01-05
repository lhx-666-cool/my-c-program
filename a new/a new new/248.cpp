#include<iostream>
using namespace std;
int main() {
    int piao, price, day;
    cin >> piao >> price >> day;
    int cash = 0;
    while (day--) {
        int trade;
        cin >> trade >> price;
        cash -= trade * price;
        piao += trade;
    }
    cout << piao * price + cash;
}
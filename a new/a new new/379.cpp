#include<iostream>
using namespace std;
int main() {
    int year, month, day;
    cin >> year >> month >> day;
    if (month == 1) {
        year--;
        month = 13;
    } else if (month == 2) {
        year--;
        month = 14;
    }
    int y = year % 100;
    int c = year / 100;
    int w = y + (y / 4) + (c / 4) - 2 * c + (26 * (month + 1) / 10) + day - 1;
    w = w % 7;
    switch (w) {
    case 0:cout << "Sunday" << endl;break;
    case 1:cout << "Monday" << endl;break;
    case 2:cout << "Tuesday" << endl;break;
    case 3:cout << "Wendnesday" << endl;break;
    case 4:cout << "Thursday" << endl;break;
    case 5:cout << "Friday" << endl;break;
    case 6:cout << "Saturday" << endl;break;

    }

}
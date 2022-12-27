#include<iostream>
using namespace std;
int main() {
    int stu[5][4] = { {0} };
    double ave = 0;
    int fal = 0, well = 0;
    for (int i = 0;i < 5;i++) {
        double average = 0;
        int good = 0, bad = 0;
        cin >> stu[i][0] >> stu[i][1] >> stu[i][2] >> stu[i][3];
        for (int j = 0;j < 4;j++) {
            average += stu[i][j];
            if (stu[i][j] > 85) {
                good++;
            } else if (stu[i][j] < 60) {
                bad++;
            }
        }
        average = average / 4;
        if (average >= 90 || good == 4) {
            well++;
        }
        if (bad >= 2) {
            fal++;
        }
        ave += stu[i][0];
    }
    ave /= 5;
    printf("%.1f %d %d", ave, fal, well);
}
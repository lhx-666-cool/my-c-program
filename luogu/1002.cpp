#include<iostream>
using namespace std;
int main() {
    int bx, by;
    int f[100][100] = { {0} };
    long long re[100][100] = { {0} };
    int mx, my;
    cin >> bx >> by >> mx >> my;
    mx += 2; my += 2; bx += 2; by += 2;
    f[mx - 2][my + 1] = 1;
    f[mx - 2][my - 1] = 1;
    f[mx - 1][my - 2] = 1;
    f[mx - 1][my + 2] = 1;
    f[mx + 1][my + 2] = 1;
    f[mx + 1][my - 2] = 1;
    f[mx + 2][my - 1] = 1;

    f[mx + 2][my + 1] = 1;
    f[mx][my] = 1;
    re[2][1] = 1;
    for (int i = 2;i <= bx;i++) {
        for (int j = 2;j <= by;j++) {
            if (f[i][j] == 1) {
                continue;
            } else {
                re[i][j] = re[i - 1][j] + re[i][j - 1];
            }

        }
    }
    cout << re[bx][by];
}
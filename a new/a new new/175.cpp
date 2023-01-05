#include<iostream>
using namespace std;
int win[1281][1025];
struct eve {
    int x1, x2, y1, y2;
}e[11];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int x1, x2, y1, y2;

        cin >> x1 >> y1 >> x2 >> y2;
        e[i] = { x1,x2,y1,y2 };
        for (int j = x1;j <= x2;j++) {
            for (int k = y1;k <= y2;k++) {
                win[j][k] = i;
            }
        }
    }
    while (m--) {
        int x, y;
        cin >> x >> y;
        if (win[x][y] == 0) {
            cout << "IGNORED" << endl;
        } else {
            cout << win[x][y] << endl;
            int i = win[x][y];
            int x1 = e[i].x1, x2 = e[i].x2, y1 = e[i].y1, y2 = e[i].y2;
            for (int j = x1;j <= x2;j++) {
                for (int k = y1;k <= y2;k++) {
                    win[j][k] = i;
                }
            }
        }

    }
}
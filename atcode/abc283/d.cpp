#include<iostream>
#include<cstring>
using namespace std;
const int N = 1010;
int a[N][N];
int f[N][2][2][2];
int n, m;
void bian(int line) {
    for (int i = 1;i <= m;i++) {
        a[line][i] = 1 - a[line][i];
    }
}
bool check(int i, int j, int k, int line) {
    if (i == 1) {
        bian(line - 1);
    }
    if (j == 1) {
        bian(line);
    }
    if (k == 1) {
        bian(line + 1);
    }
    bool res = true;
    for (int i = 1;i <= m;i++) {
        if (a[line - 1][i] != a[line][i] && a[line + 1][i] != a[line][i] && a[line][i - 1] != a[line][i] && a[line][i + 1] != a[line][i]) {
            res = false;
            break;
        }
    }
    if (i == 1) {
        bian(line - 1);
    }
    if (j == 1) {
        bian(line);
    }
    if (k == 1) {
        bian(line + 1);
    }
    if (res == false) {
        return false;
    }
    return true;
}
int main() {
    cin >> n >> m;
    for (int i = 0;i <= m + 1;i++) {
        a[0][i] = 2;
        a[n + 1][i] = 2;
    }
    for (int i = 0;i <= n + 1;i++) {
        a[i][0] = 2;
        a[i][m + 1] = 2;
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    memset(f, 0x3f, sizeof f);
    f[1][0][0][0] = 0;
    f[1][0][0][1] = 1;
    for (int i = 2;i <= n;i++) {
        for (int j = 0;j <= 1;j++) {
            for (int k = 0;k <= 1;k++) {
                for (int l = 0; l <= 1;l++) {
                    if (check(j, k, l, i - 1)) {
                        f[i][j][k][l] = min(f[i][j][k][l], min(f[i - 1][0][j][k], f[i - 1][1][j][k]) + l);
                    }
                }
            }
        }
    }
    int res = 1e9;
    for (int i = 0;i <= 1;i++) {
        for (int j = 0;j <= 1;j++) {
            for (int k = 0;k <= 1;k++) {
                if (check(j, k, 0, n)) {
                    res = min(res, f[n][i][j][k]);
                }
            }
        }
    }
    if (res >= 1e7) {
        printf("-1");
    } else {
        printf("%d", res);
    }
}
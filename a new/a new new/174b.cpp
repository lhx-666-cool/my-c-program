#include<iostream>
#include<cstring>
using namespace std;
const int N = 210, M = 80000, base = 40000;
int f[N][M];
int main() {
    int n;
    scanf("%d", &n);
    f[0][base] = 1;
    for (int i = 1;i <= n;i++) {
        int v;
        scanf("%d", &v);
        for (int k = 0;k <= M;k++) {
            f[i][k] += f[i - 1][k + v];
            if (k >= v) {
                f[i][k] += f[i - 1][k - v];
            }
        }
    }
    int v = 0;
    while (f[n][base - v] == 0 && f[n][base + v] == 0) {
        v++;
    }
    printf("%d", v);
}
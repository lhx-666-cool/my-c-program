#include<iostream>
using namespace std;
const int M = 3010;
int f[M];
int main() {
    int n, m;
    cin >> n >> m;
    f[0] = 1;
    while (n--) {
        int v;
        cin >> v;
        for (int j = v;j <= m;j++) {
            f[j] += f[j - v];
        }
    }
    cout << f[m];
}
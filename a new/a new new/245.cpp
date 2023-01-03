#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    bool l[n] = { 0 };
    for (int i = 1;i <= m;i++) {
        for (int j = i;j <= n;j += i) {
            l[j] = !l[j];
        }
    }
    for (int i = 1;i <= n;i++) {
        if (l[i] == true) {
            cout << i << " ";
        }
    }
}
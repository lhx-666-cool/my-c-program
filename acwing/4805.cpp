#include<iostream>
#include<queue>
using namespace std;
int nn, x, y;
long long sol(long long n, long long res) {
    if (n == 0) {
        return res;
    }
    if (n == 1) {
        return res + x;
    }
    if (n % 2 == 0) {
        if (n / 2 * x > y) {
            res += y;
        } else {
            res += n / 2 * x;
        }
        return sol(n / 2, res);
    } else {
        return min(sol(n - 1, res + x), sol(n + 1, res + x));
    }
}
int main() {
    cin >> nn >> x >> y;
    cout << sol(nn, 0);
}
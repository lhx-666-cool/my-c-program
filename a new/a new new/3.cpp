#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1010;
int a[N];
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    sort(a, a + t);
    int res = 1e9;
    for (int i = 1; i < t; i++) {
        res = min(res, abs(a[i - 1] - a[i]));
    }
    cout << res;
}
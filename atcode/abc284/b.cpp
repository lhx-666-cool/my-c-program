#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int res = 0;
        int n;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            if (x % 2 == 1) {
                res++;
            }
        }
        cout << res << endl;
    }
}
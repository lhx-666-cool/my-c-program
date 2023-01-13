#include<iostream>
#include<string>
using namespace std;
int main() {
    string a[11];
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = n - 1;i >= 0;i--) {
        cout << a[i] << endl;
    }
}
#include<iostream>
using namespace std;
const int N = 20;
int a[N];
int cnt;
int n;
bool check(int x, int y) {
    for (int i = 1;i < x;i++) {
        if (a[i] == y) {
            return false;
        }
        if (i + a[i] == x + y) {
            return false;
        }
        if (i - a[i] == x - y) {
            return false;
        }
    }
    return true;
}
void dfs(int row) {
    if (row == n + 1) {
        cnt++;
        return;
    }
    for (int i = 1;i <= n;i++) {
        if (check(row, i)) {
            a[row] = i;
            dfs(row + 1);
        }
    }
}
int main() {
    cin >> n;
    dfs(1);
    cout << cnt << endl;
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;
int res[100000000] = { 0 };
bool st[100000000] = { 0 };
int main() {
    priority_queue<int, vector<int>, greater<int> >q;
    int n, m, t;
    cin >> n >> m >> t;
    while (n--) {
        int a, b;
        cin >> a >> b;
        res[b] += a;
        q.push(b);
        st[b] = true;
    }
    if (t == 0) {
        while (m--) {
            int a, b;
            cin >> a >> b;
            res[b] += a;
            if (st[b] == false) {
                q.push(b);
            }
        }
    } else {
        while (m--) {
            int a, b;
            cin >> a >> b;
            res[b] -= a;
            if (st[b] == false) {
                q.push(b);
            }
        }
    }
    bool sta = false;
    while (!q.empty()) {
        int i = q.top();
        q.pop();
        if (res[i] != 0) {
            if (res[i] >= 0 && sta) {
                cout << '+';
            }
            if ((res[i] != 1 && res[i] != -1) || i == 0) {
                cout << res[i];
            } else if (res[i] == -1) {
                cout << '-';
            }
            if (i != 0) {
                cout << 'x';
                if (i != 1) {
                    cout << '^' << i;
                }
            }
            sta = true;
        }
    }
}
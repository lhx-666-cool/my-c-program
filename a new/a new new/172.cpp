#include<iostream>
using namespace std;
int n;
int cnt;
char out[100];
int jisuan() {
    int res[10] = { 0 };
    int head = 0;
    res[0] = 1;
    for (int i = 2;i <= n;i++) {
        if (out[i] == 0) {
            res[++head] = i;
        } else if (out[i] == 1) {
            res[++head] = -i;
        } else {
            res[head] = res[head] * 10;
            if (res[head] < 0) {
                res[head] -= i;
            } else {
                res[head] += i;
            }
        }
    }
    int sum = 0;
    for (int i = 0;i <= head;i++) {
        sum += res[i];
    }
    return sum;
}
void dfs(int x) {
    if (x > n) {
        int sum = jisuan();
        if (sum == 0) {
            cnt++;
        }
        return;
    }
    for (int i = 0;i <= 2;i++) {
        if (i == 0) {
            out[x] = 0;
            dfs(x + 1);
        } else if (i == 1) {
            out[x] = 1;
            dfs(x + 1);
        } else {
            out[x] = 2;
            dfs(x + 1);
        }
    }
}

int main() {
    cin >> n;
    dfs(2);
    cout << cnt;
}
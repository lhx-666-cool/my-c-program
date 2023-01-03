#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int d[N], idx = 0;
void down(int x) {
    int t = x;
    if (x * 2 <= idx && d[x * 2] < d[t]) {
        t = x * 2;
    }
    if (x * 2 + 1 <= idx && d[x * 2 + 1] < d[t]) {
        t = x * 2 + 1;
    }
    if (x != t) {
        swap(d[x], d[t]);
        down(t);
    }
}
void up(int x) {
    while (x / 2 > 0 && d[x] < d[x / 2]) {
        swap(d[x], d[x / 2]);
        x /= 2;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int op, x;
        scanf("%d", &op);
        if (op == 1) {
            scanf("%d", &x);
            d[++idx] = x;
            up(idx);
        } else if (op == 2) {
            printf("%d\n", d[1]);
        } else {
            d[1] = d[idx];
            idx--;
            down(1);
        }
    }
}
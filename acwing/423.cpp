#include<iostream>
using namespace std;
const int N = 1010;
int f[N];
int main() {
    int t, m;
    scanf("%d %d", &t, &m);
    while (m--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = t;i >= a;i--) {
            f[i] = max(f[i], f[i - a] + b);
        }
    }
    printf("%d", f[t]);
}
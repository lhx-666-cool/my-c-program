#include<iostream>
using namespace std;
int inp[110];
int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    for (int i = 1;i <= n;i++) {
        scanf("%d", &inp[i]);
    }
    for (int i = p, j = r;i <= q;i++, j++) {
        swap(inp[i], inp[j]);
    }
    for (int i = 1;i <= n;i++) {
        printf("%d ", inp[i]);
    }
}
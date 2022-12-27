#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int inp[100] = { 0 };
    int m, n;
    cin >> m >> n;
    for (int i = 0;i < m * n;i++) {
        cin >> inp[i];
    }
    sort(inp, inp + m * n);
    for (int i = 0;i < m;i++) {
        if (i % 2 == 0) {
            for (int j = i * n + n - 1;j >= i * n;j--) {
                printf("%d ", inp[j]);
            }
        }
        if (i % 2 == 1) {
            for (int j = i * n;j <= i * n + n - 1;j++) {
                printf("%d ", inp[j]);
            }
        }
        printf("\n");
    }
}
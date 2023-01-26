#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    while (q--) {
        int a1;
        scanf("%d", &a1);
        if (a1 == 1) {
            int b, c;
            scanf("%d %d", &b, &c);
            a[b] = c;
        } else {
            int b;
            scanf("%d", &b);
            printf("%d\n", a[b]);
        }
    }
}
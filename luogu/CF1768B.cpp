#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
        }
        int cnt = 0, num = 1;
        for (int i = 0;i < n;i++) {
            if (a[i] == num) {
                num++;
            } else {
                cnt++;
            }
        }
        if (cnt % m == 0) {
            printf("%d\n", cnt / m);
        } else {
            printf("%d\n", cnt / m + 1);
        }
    }
}
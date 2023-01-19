#include<iostream>
using namespace std;
const int N = 5010;
char str[N];
int main() {
    int n;
    scanf("%d", &n);
    scanf("%s", str + 1);
    int l = 0;
    for (int i = 1;i < n;i++) {
        l = 0;
        bool flag = false;
        for (int k = 1;k + i <= n;k++) {
            if (str[k] != str[k + i]) {
                l = k;
            } else {
                printf("%d\n", l);
                flag = true;
                break;
            }
        }
        if (!flag) {
            printf("%d\n", l);
        }
    }
}
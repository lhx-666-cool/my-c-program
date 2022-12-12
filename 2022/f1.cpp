#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    int count[10010] = { 0 };
    int head = -1;
    int res[10010][2] = { 0 };
    for (int i = 0;i < t;i++) {
        int n, inp[10010] = { 0 };
        scanf("%d", &n);
        for (int j = 0;j < n;j++) {
            scanf("%d", &inp[j]);
        }
        for (int j = 0;j < n;j++) {
            for (int k = j + 1;k < n;k++) {
                if (inp[j] > inp[k]) {
                    count[i] += 3;
                    res[++head][0] = j + 1;
                    res[head][1] = k + 1;
                    swap(inp[j], inp[k]);
                }
            }
        }
    }
    head = -1;
    for (int i = 0;i < t;i++) {
        printf("%d\n", count[i]);
        for (int j = 0;j <= count[i] / 3 - 1;j++) {
            printf("%d %d %d\n", 2, res[j][0], res[j][1]);
            printf("%d %d %d\n", 1, res[j][1], res[j][0]);
            printf("%d %d %d\n", 3, res[j][0], res[j][1]);
        }
    }
}
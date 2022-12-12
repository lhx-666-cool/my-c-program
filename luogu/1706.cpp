#include<cstdio>
#include<algorithm>
int res[362881];
int head = -1;
using namespace std;
int a[9]{ 1,2,3,4,5,6,7,8,9 };
void dfs(int begin, int n) {
    if (begin == n) {
        head++;
        for (int i = n;i >= 0;i--) {
            res[head] = res[head] * 10 + a[i];
        }
    } else {
        for (int i = begin;i <= n;i++) {
            swap(a[begin], a[i]);
            dfs(begin + 1, n);
            swap(a[begin], a[i]);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    dfs(0, n - 1);
    sort(res, res + head + 1);
    for (int i = 0;i <= head;i++) {
        int outp[9] = { 0 };
        int ohead = -1;
        while (res[i] > 0) {
            outp[++ohead] = res[i] % 10;
            res[i] /= 10;
        }
        for (int j = ohead;j >= 0;j--) {
            printf("    %d", outp[j]);
        }
        printf("\n");
    }
}
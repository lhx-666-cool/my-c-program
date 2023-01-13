#include<iostream>
#include<algorithm>
using namespace std;
const int N = 3e5 + 10;
typedef pair<int, pair<int, int>> PII;
int fa[N];
pair<int, int> res[N];
PII a[N];
int find(int x) {
    if (x != fa[x]) {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}
void uni(int x, int y) {
    fa[x] = fa[y];
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 1;i <= n;i++) {
            fa[i] = i;
        }
        for (int i = 0;i < n;i++) {
            scanf("%d %d", &a[i].second.first, &a[i].first);
            a[i].second.second = i;
        }
        sort(a, a + n);
        bool flag = false;
        for (int i = 0;i < n;i++) {
            int j = find(a[i].second.first);
            if (j <= a[i].first && j >= a[i].second.first) {
                res[i].second = j;
                res[i].first = a[i].second.second;
                uni(j, j + 1);
            } else {
                printf("-1");
                flag = true;
                break;
            }
        }
        if (flag == false) {
            sort(res, res + n);
            for (int i = 0;i < n;i++) {
                printf("%d ", res[i].second);
            }
        }
        printf("\n");
    }
}
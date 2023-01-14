#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e4 + 10;
int a[N];
pair<int, int> as[N];
int ansi[N];
int ansj[N];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0;i < n;i++) {
            scanf("%d", &a[i]);
            as[i].first = a[i];
            as[i].second = i;
        }
        int cnt = 0;
        int head = -1;
        sort(as, as + n);
        for (int i = 0;i < n;i++) {
            if (a[i] != as[i].first) {
                swap(a[i], a[as[i].second]);
                ansi[++head] = i + 1;
                ansj[head] = as[i].second + 1;
                swap(as[a[i] - 1].second, as[a[as[i].second] - 1].second);
                cnt++;
            }
        }
        printf("%d\n", cnt * 3);
        for (int i = 0;i <= head;i++) {
            printf("2 %d %d\n", ansi[i], ansj[i]);
            printf("1 %d %d\n", ansj[i], ansi[i]);
            printf("3 %d %d\n", ansi[i], ansj[i]);
        }
    }
}

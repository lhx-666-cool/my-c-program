#include<cstdio>
using namespace std;
const int N = 2e6 + 10;
int gezi[N];
int q[N];
int step[N];
int main() {
    int n, m;
    int hh = 0, tt = -1;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &gezi[i]);
    }
    q[++tt] = n;
    for (int i = n - 1;i >= 0;i--) {

        while (hh <= tt && i + m < q[hh]) {
            hh++;
        }
        while (hh <= tt && step[q[tt]] < step[i + 1]) {
            tt--;
        }
        q[++tt] = i + 1;
        if (gezi[i] == 0) {
            step[i] = step[q[hh]] + 1;
        } else {
            step[i] = step[i + gezi[i]];
        }
    }
    printf("%d ", step[0]);
    hh = 0, tt = -1;
    q[++tt] = n;
    for (int i = n - 1;i >= 0;i--) {
        while (hh <= tt && i + m < q[hh]) {
            hh++;
        }
        while (hh <= tt && step[q[tt]] > step[i + 1]) {
            tt--;
        }
        q[++tt] = i + 1;
        if (gezi[i] == 0) {
            step[i] = step[q[hh]] + 1;
        } else {
            step[i] = step[i + gezi[i]];
        }
    }
    printf("%d ", step[0]);
}

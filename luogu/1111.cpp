#include<cstdio>
#include<algorithm>
using namespace std;
typedef struct road
{
    int x = 0;
    int y = 0;
    int t = 0;
} Road;
int cmp(Road x, Road y) {
    if (x.t < y.t) {
        return 1;
    } else {
        return 0;
    }
}
int vill[110000] = { 0 };
Road road[110000];
int find_(int x) {
    if (x == vill[x]) {
        return x;
    } else {
        vill[x] = find_(vill[x]);
        return vill[x];
    }
}
void uni(int x, int y) {
    x = find_(x);
    y = find_(y);
    if (x != y) {
        vill[x] = vill[y];
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        vill[i] = i;
    }
    for (int i = 1;i <= m;i++) {
        scanf("%d %d %d", &road[i].x, &road[i].y, &road[i].t);
    }
    sort(road + 1, road + 1 + m, cmp);
    int cou = 0;
    int i = 0;
    for (i = 1;i <= m;i++) {
        uni(road[i].x, road[i].y);
        cou = 0;
        for (int j = 1;j <= n;j++) {
            if (vill[j] == j) {
                cou++;
            }
        }
        if (cou == 1) {
            break;
        }
    }
    if (cou == 1) {
        printf("%d", road[i].t);
    } else {
        printf("-1");
    }
}
#include<cstdio>
#include<algorithm>
using namespace std;
typedef struct  giveout
{
    int x = 0;
    int y = 0;
    int give = 0;
}Giveout;
bool cmp(Giveout x, Giveout y) {
    if (x.give < y.give) {
        return true;
    } else {
        return false;
    }
}
int cloud[1100] = { 0 };
Giveout giveout[11000];
int find(int x) {
    if (x == cloud[x]) {
        return x;
    } else {
        cloud[x] = find(cloud[x]);
        return cloud[x];
    }
}
void uni(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        cloud[x] = cloud[y];
    }
}
int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0;i <= n;i++) {
        cloud[i] = i;
    }
    for (int i = 0;i < m;i++) {
        scanf("%d %d %d", &giveout[i].x, &giveout[i].y, &giveout[i].give);
    }
    sort(giveout, giveout + m, cmp);
    int daijia = 0;
    for (int i = 0;i < m;i++) {
        uni(giveout[i].x, giveout[i].y);
        daijia += giveout[i].give;
        int jishuqi = 0;
        for (int j = 1;j <= n;j++) {
            if (cloud[j] == j) {
                jishuqi++;
            }
        }
        if (jishuqi == k) {
            printf("%d", daijia);
            return 0;
        }
    }
    printf("No Answer");
    return 0;
}
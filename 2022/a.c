#include "stdio.h"
int main() {
    int n, m;//n：需要的次数，m：有的空闲时间
    int availnum = 0;
    double everyday[110][110] = { {0} };
    int every = 0;
    double h1 = 0, m1 = 0, h2 = 0, m2 = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0;i < m;i++) {
        scanf("%d", &every);
        for (int j = 0;j < every;j++) {
            scanf("%lf:%lf-%lf:%lf", &h1, &m1, &h2, &m2);
            double time2 = h2 + m2 / 60;
            double time1 = h1 + m1 / 60;
            everyday[i][j] = time2 - time1;
        }
        for (int j = 0;j < every; j++) {
            if (everyday[i][j] >= 0.5) {
                availnum++;
                break;
            }
        }
    }
    if (availnum >= n) {
        printf("ZhongYuDaWanKaLe");
    } else {
        printf("WanDanTiYuGuaLe");
    }
}
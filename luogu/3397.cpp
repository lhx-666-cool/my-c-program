#include<cstdio>
using namespace std;
int f[1010][1010];
void ins(int x1, int y1, int x2, int y2) {
    f[x1][y1]++;
    f[x1][y2 + 1]--;
    f[x2 + 1][y1]--;
    f[x2 + 1][y2 + 1]++;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0;i < m;i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        ins(x1, y1, x2, y2);
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }
}
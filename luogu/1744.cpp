#include<iostream>
#include<cmath>
using namespace std;
const int N = 110;
const int INF = 1e9;
struct point
{
    int x, y;
}point[N];

double map[N][N];
double d[N];
bool st[N];
int n, m;
void init() {
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            map[i][j] = INF;
        }
        d[i] = INF;
    }
}
double digkstra(int s, int e) {
    d[s] = 0;
    for (int i = 0;i < n;i++) {
        int t = -1;
        for (int j = 1;j <= n;j++) {
            if (!st[j] && (t == -1 || d[t] > d[j])) {
                t = j;
            }
        }
        for (int j = 1;j <= n;j++) {
            d[j] = min(d[j], d[t] + map[t][j]);
        }
        st[t] = true;
    }
    return d[e];
}
int main() {
    scanf("%d", &n);
    init();
    for (int i = 1;i <= n;i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        point[i] = { x,y };
    }
    scanf("%d", &m);
    for (int i = 0;i < m;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b] = sqrt((point[a].x - point[b].x) * (point[a].x - point[b].x) + (point[a].y - point[b].y) * (point[a].y - point[b].y));
        map[b][a] = map[a][b];
    }
    int s, e;
    scanf("%d %d", &s, &e);
    printf("%.2f", digkstra(s, e));
}
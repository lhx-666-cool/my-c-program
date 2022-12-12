#include<cstdio>
#include<utility>
#include<queue>
using namespace std;
const int INF = 100000000;
typedef pair<int, int> P;
char maze[998][998 + 1] = { {"#S######.#"},{"......#..#"},{".#.##.##.#"},{".#........"},{"##.##.####"},{"....#....#"},{".#######.#"},{"....#....."},{".####.###."},{"....#...G#"} };
int N = 10, M = 10;
int sx, sy;
int gx, gy;
int d[998][998 + 1] = { {0} };
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int bfs() {
    queue<P> que;
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            d[i][j] = INF;
        }
    }
    que.push(P(sy, sx));
    d[sx][sy] = 0;
    while (que.size()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) {
            break;
        }
        for (int i = 0;i < 4;i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }

    }
    return d[gx][gy];
}
int main() {
    int res = bfs();
    printf("%d", res);
}

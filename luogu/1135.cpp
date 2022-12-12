#include<cstdio>
#include<queue>
using namespace std;
int room[220] = { 0 };
int step[220] = { 0 };
int myque[10000] = { 0 };
int head = -1;
int tail = 0;
int bfs(int sta, int end, int n) {
    // queue<int>q;
    if (sta == end) {
        return 0;
    }
    // q.push(sta);
    myque[++head] = sta;
    while (head - tail != -1) {
        // int ling = q.front();
        int ling = myque[tail];
        if (ling + room[ling] <= n) {
            if (step[ling + room[ling]] == 0) {
                // q.push(ling + room[ling]);
                myque[++head] = ling + room[ling];
                step[ling + room[ling]] = step[ling] + 1;
                if (ling + room[ling] == end) {
                    return step[ling + room[ling]];
                }
            }
        }
        if (ling - room[ling] > 0) {
            if (step[ling - room[ling]] == 0) {
                // q.push(ling - room[ling]);
                myque[++head] = ling - room[ling];
                step[ling - room[ling]] = step[ling] + 1;
                if (ling - room[ling] == end) {
                    return step[ling - room[ling]];
                }
            }
        }
        tail++;
    }
    return -1;
}
int main() {
    int sta = 0, end = 0, n;
    scanf("%d %d %d", &n, &sta, &end);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &room[i]);
    }
    int res = bfs(sta, end, n);
    printf("%d", res);
}
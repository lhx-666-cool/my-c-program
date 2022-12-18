#include<cstdio>
#include<map>
#include<utility>
int step[4][2] = { {0,-1},{-1,0},{0,1},{1,0} };
using namespace std;
int main() {
    map<pair<int, int>, bool> m;
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 0;i < k;i++) {
        int h, l;
        scanf("%d %d", &h, &l);
        pair<int, int>x(h, l);
        m[x] = true;
        for (int j = 0;j < 4;j++) {
            pair<int, int>ling(x.first, x.second);
            ling.first += step[j][0];
            ling.second += step[j][1];
            if (m.find(ling) != m.end()) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}
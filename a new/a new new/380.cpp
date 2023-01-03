#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int sushu[30] = { 0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
int n, sum;
int res[100];
int head = -1;
int cmp(int x, int y) {
    if (x > y) {
        return 1;
    }
    return 0;
}
void dfs(int x) {
    if (x >= 5) {
        res[++head] = abs(sum);
        return;
    }
    for (int i = 0;i < 2;i++) {
        if (i == 0) {
            sum += sushu[n + x];
            dfs(x + 1);
            sum -= sushu[n + x];
        } else {
            sum -= sushu[n + x];
            dfs(x + 1);
            sum += sushu[n + x];
        }
    }
}

int main() {
    cin >> n;
    dfs(0);
    sort(res, res + head + 1);
    printf("%d", res[0]);

}
#include<cstdio>
#include<queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>>p;
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        int x;
        scanf("%d", &x);
        p.push(x);
    }
    int sum = 0;
    for (int i = 0;i < n - 1;i++) {
        int y = 0;
        y += p.top();
        p.pop();
        y += p.top();
        p.pop();
        p.push(y);
        sum += y;
    }
    printf("%d", sum);
    return 0;
}
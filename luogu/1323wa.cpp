#include<queue>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
priority_queue<int, vector<int>, greater<int>>q;
void shuzi(int k) {
    unsigned long long int lk = k;
    priority_queue<int, vector<int>, greater<int>>claq;
    claq.push(1);
    q.push(1);
    while (q.size() < lk * 3) {
        int x = claq.top();
        q.push(2 * x + 1);
        claq.push(2 * x + 1);
        q.push(4 * x + 5);
        claq.push(4 * x + 5);
        claq.pop();
    }
}
int main() {
    int k, m;
    scanf("%d %d", &k, &m);
    shuzi(k);
    char res[1000000] = { 0 };
    int head = -1;
    for (int i = 0;i < k;i++) {
        int x = q.top();
        char cx[100] = { 0 };
        int cxhead = -1;
        while (x > 0) {
            cx[++cxhead] = x % 10 + 48;
            x /= 10;
        }
        for (int i = cxhead;i >= 0;i--) {
            res[++head] = cx[i];
        }
        q.pop();
    }
    printf("%s\n", res);
    int sum = 0;
    char* x = res;
    for (int i = 0;i < head - m + 1;i++) {
        x = max_element(x, res + head + 1);
        sum = sum * 10 + *x - 48;
        *x = -1;
    }
    printf("%d", sum);
}
#include<cstdio>
#include<queue>
#include<iostream>
#include<cstdlib>
typedef struct value {
    int gezi = 0;
    int max = 0;
    int min = 0;
}val;
typedef struct memory {
    int bigmax = 0;
    int littlemin = 0;
}Mem;
using namespace std;
int* gezi = (int*)calloc(1001000, sizeof(int));
Mem* mem = (Mem*)calloc(1001000, sizeof(Mem));
int n;
int m;
int remax = -1;
int remin = n;
int guangsou(int* gezi, int n, int m) {
    queue<val> que;
    val a;
    a.gezi = gezi[0], a.max = 0, a.min = 0;
    que.push(a);
    val lingshi;
    while (!que.empty()) {
        for (int i = 1;i <= m;i++) {
            if (gezi[que.front().gezi + i] >= n || que.front().gezi + i >= n) {
                if (remin > que.front().min + 1) {
                    remin = que.front().min + 1;
                }
                if (remax < que.front().max + 1) {
                    remax = que.front().max + 1;
                }
                continue;
            }
            lingshi.gezi = gezi[que.front().gezi + i];
            lingshi.max = que.front().max + 1;
            lingshi.min = que.front().min + 1;
            if ((lingshi.max > mem[lingshi.gezi].bigmax || lingshi.min < mem[lingshi.gezi].littlemin) || (mem[lingshi.gezi].bigmax == 0 && mem[lingshi.gezi].littlemin == 0)) {
                que.push(lingshi);
                mem[lingshi.gezi].bigmax = lingshi.max;
                mem[lingshi.gezi].littlemin = lingshi.min;
            }
        }
        que.pop();
    }
    return 0;
}
int main() {
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        cin >> gezi[i];
    }
    remin = n;
    for (int i = n + 2;i >= 1;i--) {
        if (gezi[i] == 0 || i >= n) {
            gezi[i] = i;
        } else {
            gezi[i] = gezi[i + gezi[i]];
        }
    }
    guangsou(gezi, n, m);
    cout << remax << " " << remin;
}
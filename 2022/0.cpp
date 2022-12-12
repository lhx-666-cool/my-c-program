#include<cstdio>
#include<queue>
#include<cstdlib>
#include<unistd.h>
typedef struct value {
    int gezi = 0;
    int max = 0;
    int min = 0;
}val;
using namespace std;
int* gezi = (int*)calloc(1001000, sizeof(int));
val* que = (val*)calloc(1000100, sizeof(val));
int n;
int m;
int remax = -1;
int remin = n;
int guangsou(int* gezi, int n, int m) {
    // queue<val> que;
    val a;
    a.gezi = gezi[0], a.max = 0, a.min = 0;
    que[0].gezi = 0, que[0].max = 0, que[0].min = 0;
    int tail = 0;
    int head = 0;
    val lingshi;
    while (head != tail - 1) {
        for (int i = 1;i <= m;i++) {
            if (gezi[que[tail].gezi + i] >= n || que[tail].gezi + i >= n) {
                if (remin > que[tail].min + 1) {
                    remin = que[tail].min + 1;
                    // printf("%d", remin);
                }
                if (remax < que[tail].max + 1) {
                    remax = que[tail].max + 1;
                    printf("%d", remax);
                }
                continue;
            }
            lingshi.gezi = gezi[que[tail].gezi + i];
            // printf("%d", lingshi.gezi);
            lingshi.max = que[tail].max + 1;
            lingshi.min = que[tail].min + 1;
            // printf("%d", lingshi.max);
            head++;
            que[head].gezi = lingshi.gezi;
            que[head].max = lingshi.max;
            que[head].min = lingshi.min;
        }
        tail++;
    }
    return 0;
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &gezi[i]);
    }
    remin = n;
    for (int i = n;i >= 1;i--) {
        if (gezi[i] == 0 || i >= n) {
            gezi[i] = i;
        } else {
            gezi[i] = gezi[i + gezi[i]];
        }
    }
    guangsou(gezi, n, m);
    printf("%d %d", remax, remin);
}
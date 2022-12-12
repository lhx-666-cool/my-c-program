#include "stdio.h"
#include "stdlib.h"
int main() {
    int n, q, k;
    int re[1100] = { 0 };
    int head = -1;
    int* val = (int*)calloc(100000, sizeof(int));
    scanf("%d %d %d", &n, &q, &k);
    for (int i = 1;i <= n;i++) {
        val[i] = 1;
    }
    for (int i = 1;i <= q;i++) {
        int L, R, X, C2;
        scanf("%d %d %d %d", &L, &R, &X, &C2);
        for (int j = L;j <= R;j++) {
            int c1 = val[j];
            X = ((X ^ c1) % k) + 1;
            val[j] = X;
        }
        ++head;
        for (int j = 1;j <= n;j++) {
            if (val[j] == C2) {
                re[head]++;
            }
        }
    }
    for (int i = 0;i <= head;i++) {
        printf("%d", re[i]);
    }
}
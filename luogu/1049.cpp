#include<bits/stdc++.h>
using namespace std;
typedef struct y {
    int time = 0;
    int val = 0;
}y;
int bb[31][20001];
y yao[30];
int main() {
    int t, m;
    scanf("%d %d", &t, &m);
    for (int i = 1;i <= m;i++) {
        scanf("%d", &yao[i].val);
    }
    for (int i = 1;i <= m;i++) {
        for (int j = 0;j <= t;j++) {
            if (j < yao[i].val) {
                bb[i][j] = bb[i - 1][j];
            } else {
                bb[i][j] = max(bb[i - 1][j - yao[i].val] + yao[i].val, bb[i - 1][j]);
            }
        }
    }
    printf("%d", t - bb[m][t]);
}
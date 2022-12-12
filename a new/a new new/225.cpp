#include<cstdio>
using namespace std;
int main() {
    int inp[3][3] = { 0 };
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            scanf("%d", &inp[i][j]);
        }
    }
    int res[3][3] = { 0 };
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            res[i][j] = inp[i][j] + inp[j][i];
        }
    }
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}
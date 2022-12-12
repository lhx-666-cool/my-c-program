#include<cstdio>
using namespace std;
int main() {
    int inp1[100] = { 0 };
    int inp2[100] = { 0 };
    for (int i = 0;i < 6;i++) {
        scanf("%d", &inp1[i]);
    }
    for (int i = 0;i < 6;i++) {
        scanf("%d", &inp2[i]);
    }
    for (int i = 0;i < 6;i++) {
        printf("%d ", inp1[i]);
        if (i == 2) {
            printf("\n");
        }
    }
    printf("\n");
    for (int i = 0;i < 6;i++) {
        printf("%d ", inp2[i]);
        if (i == 1 || i == 3) {
            printf("\n");
        }
    }
    printf("\n");
    printf("%d %d\n%d %d", inp1[0] * inp2[0] + inp1[1] * inp2[2] + inp1[2] * inp2[4], inp1[0] * inp2[1] + inp1[1] * inp2[3] + inp1[2] * inp2[5], inp1[3] * inp2[0] + inp1[4] * inp2[2] + inp1[5] * inp2[4], inp1[3] * inp2[1] + inp1[4] * inp2[3] + inp1[5] * inp2[5]);
}

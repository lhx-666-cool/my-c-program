#include "stdio.h"
int main() {
    int result[110000] = { 0 };
    int n;
    scanf("%d", &n);
    for (int xx = 0;xx < n;xx++) {
        int  ttt;
        scanf("%d", &ttt);
        result[xx] = (ttt - 1) / 5;
        printf("%d", result[xx]);
    }
    // for (int x = 0;x < n;x++) {
    //     printf("%d\n", result[x]);
    // }
    return 0;
}

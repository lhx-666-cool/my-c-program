#include<stdio.h>

int main() {
    int x;
    int butong = 1;
    int yaoqiude;
    scanf("%d %d", &x, &yaoqiude);
    int y = yaoqiude;
    for (int i = x; i <= 30000; i++) {
        butong = 1;
        int new_ch[4];
        new_ch[0] = i % 10;
        new_ch[1] = (i / 10) % 10;
        new_ch[2] = (i / 100) % 10;
        new_ch[3] = (i / 1000) % 10;
        // new_ch[4] = (i / 10000) % 10;
        if (new_ch[1] != new_ch[0]) {
            butong = 2;
        }
        if (new_ch[2] != new_ch[1] && new_ch[2] != new_ch[0]) {
            butong++;
        }
        if (new_ch[3] != new_ch[2] && new_ch[3] != new_ch[1] && new_ch[3] != new_ch[0]) {
            butong++;
        }
        //  if (new_ch[4]!=new_ch[3]&&new_ch[4] != new_ch[2] && new_ch[4] != new_ch[1] && new_ch[4] != new_ch[0]) {
            // butong++;
        // }
        if (butong == y) {
            printf("%d %04d", i - x, i);
            break;
        }
    }
}
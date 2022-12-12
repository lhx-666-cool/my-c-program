#include <stdio.h>

int main() {
    float pai = 3.1415926;
    float iron_bz = 7.86;
    float gold_bz = 19.3;
    float iron_lr = 100;
    float gold_lr = 100;
    float iron_v = 0;
    float gold_v = 0;
    float gold_g = 0;
    float iron_g = 0;
    float gold_r = 0;
    scanf("%f %f", & iron_lr, & gold_lr);
    gold_r = gold_lr / 20;
    gold_v = 3.1415926 * (gold_r) * (gold_r) * (gold_r) * 4 / 3;
    iron_v = pai * (iron_lr / 20) * (iron_lr / 20) * (iron_lr / 20) * 4 / 3;
    gold_g = gold_v * gold_bz;
    iron_g = iron_bz * iron_v;
    printf("%.3f %.3f", iron_g, gold_g);
    return 0;
}
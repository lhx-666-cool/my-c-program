#include<stdio.h>
#include<math.h>

int main() {
    float lichen, qian;
    int dendai;
    scanf("%f %d", & lichen, & dendai);
    if (lichen <= 0) {
        printf("0");
    } else {
        if (lichen <= 3 && lichen > 0) {
            qian = 10;
        }
        if (lichen > 3 && lichen <= 10) {
            qian = 10 + (lichen - 3) * 2;
        }
        if (lichen > 10) {
            qian = 10 + 7 * 2 + (lichen - 10) * 3;
        }
        if (dendai < 0) {
            
        } else {
            dendai = floor(dendai / 5) * 2;
            qian = qian + dendai;
            if (qian <= 0) {
            }
            if (qian == 0) {
                printf("0");
            } else {
                printf("%.0f", (qian+0.5));
            }
        }
    }
    return 0;
}
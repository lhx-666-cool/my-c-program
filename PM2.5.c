#include<stdio.h>

int main() {
    float ave,sum = 0;
    int j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, j6 = 0,day = 0,eve=0,i=0;
    char k;
    scanf("%d", & day);
    while (i <day) {
        scanf("%d", & eve);
        scanf("%c", & k);
        if (eve >= 0 && eve <= 50) {
            j1++;
        } else if (eve >= 51 && eve <= 100) {
            j2++;
        } else if (eve >= 101 && eve <= 150) {
            j3++;
        } else if (eve >= 151 && eve <= 200) {
            j4++;
        } else if (eve >= 201 && eve <= 300) {
            j5++;
        } else if (eve > 300) {
            j6++;
        }
        sum = sum + eve;
        i++;
    }
    printf("%.2f\n%d %d %d %d %d %d", sum / day, j1, j2, j3, j4, j5, j6);
    return 0;
}
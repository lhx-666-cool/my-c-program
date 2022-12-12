#include<stdio.h>

#include<math.h>

int main() {
    int p, num, su[20000], i, n, cishu, m = 0, sum, p10;
    for (i = 2; i <= 220000; i++) {
        cishu = 0;
        for (n = 1; n <= sqrt(i); n++) {
            if (i % n == 0) {
                cishu++;
            }
        }
        if (cishu == 1) {
            su[m] = i;
            m++;
        }
    }
    scanf("%d %d", & p,&p10);
    if(p<p10){
    for (; p <= p10; p++) {
        sum = sum + su[p - 1];
    }
    printf("%d", sum);}else
    if(p10<=p){
    for (; p10 <= p; p10++) {
        sum = sum + su[p10 - 1];
    }
    printf("%d", sum);        
    }
}
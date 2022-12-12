#include <stdio.h>
int main(){
    float t, h, m ,te;
    scanf("%f %f",&h,&m);
    t = h + (m/60);
    // printf("%f",t);
    te = 4*t*t/(t+2)-20;
    printf("%.2f",te);
}
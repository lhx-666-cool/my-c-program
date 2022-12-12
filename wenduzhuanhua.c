#include <stdio.h>

int main(){
    float s = 0;
    float h = 0;
    scanf("%f",&h);
    s = (h - 32) * 5 / 9;
    printf("%.2f",s);

}
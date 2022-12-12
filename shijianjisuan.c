#include<stdio.h>
int main(){
    int h;
    char m1,m2;
    scanf("%d:%c%c",&h,&m1,&m2);
    if(h>0&&h<12){
        printf("%d:%c%c AM",h,m1,m2);
    }
    if(h==12){
        printf("12:%c%c PM",m1,m2);
    }
    if(h>=13&&h<24){
        printf("%d:%c%c PM",h-12,m1,m2);
    }
    if(h==0||h==24){
        printf("00:%c%c AM",m1,m2);
    }
}
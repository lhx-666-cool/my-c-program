#include<stdio.h>
int main(){
    float h,m;
    float t,T;
    scanf("%f %f",&h,&m);
    t=h+m/60;
    if(t>=0&&t<=10){
        T=100-5*t;
    }
    if(t>10&&t<=30){
        T=50-(t-10);
    }
    if(t>30&&t<=50){
        T=30-(t-30.0)/2.0;
    }
    if(t>50){
        T=20;
    }
    printf("%.1f",T);
}
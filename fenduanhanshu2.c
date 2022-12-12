#include<stdio.h>
int main(){
    int x,re;
    scanf("%d",&x);
    if(x<1){
        re=x;
    }
    if(x>=1&&x<10){
        re=2*x-1;
    }
    if(x>=10){
        re=3*x-11;
    }
    printf("%d",re);
}
//
// Created by liu on 2022/11/4.
//
#include "stdio.h"
int main(){
    int n;
    float or=100;
    scanf("%d",&n);
    float sum=100;
    for(int i=1;i<=n;i++){
        if(i!=1){
            sum+=or*2;
        }
        or=or/2;
    }
    printf("S=%.3f h=%.3f",sum,or);


}
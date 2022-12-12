#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",x%10+(x-(x%10))/10%10+(x-(x%100))/100);
}
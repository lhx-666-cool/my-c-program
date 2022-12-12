#include <stdio.h>
int main (){
    int zhen,ge ,shi ,bai ,sum;
    scanf("%d",&zhen);
    ge = zhen%10;
    shi = (zhen-ge)/10%10;
    bai = (zhen-shi)/100%10;
    sum= ge+shi+bai;
    printf("%d",sum);
}
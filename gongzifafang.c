#include <stdio.h>
int main (){
    int money ;
    int m100,m50,m20,m10,m5,m1;
    scanf("%d",&money);
    m100 = money/100;
    money = money - m100*100;
    m50 = money/50;
    money = money - m50*50;
    m20 = money /20;
    money = money - m20*20;
    m10 = money/10;
    money = money - m10*10;
    m5 = money/5;
    money = money - m5*5;
    m1 = money/1;
    printf("%d %d %d %d %d %d",m100,m50,m20,m10,m5,m1);
}
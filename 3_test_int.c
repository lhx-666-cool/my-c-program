#include <stdio.h>

int main()
{
    int price = 0;

    printf("请输入金额");
    scanf("%d", &price);

    int change = 100 - price;
    printf("找零%d元", change);//四则运算都可以 %取余
    return 0;
}
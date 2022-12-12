//
// Created by liu on 2022/11/5.
//
#include "stdio.h"
int main()
{
    int m, n, temp, i;
    int y,b;
    scanf("%d%d", &m, &n);
    if(m<n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=m; i>0; i++)
        if(i%m==0 && i%n==0)
        {
            b=i;
            break;
        }
    printf("%d",b);
    return 0;
}
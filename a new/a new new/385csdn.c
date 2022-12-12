#include<stdio.h>
int main()
{
    int i, n, a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &n);
    for (i = 0;i < n + d;i++)
    {
        if (i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7 || (i / 100) % 10 == 7)//若带有7则跳过 
        {
            d = d + 1;
            if (i % 3 == 0)c = c + 1;//若为0则为第三个同学
            else if (i % 3 == 2)b = b + 1;//若为2则为第二个同学
            else if (i % 3 == 1)a = a + 1;//若为1则为第一个同学
        }
    }
    printf("%d %d %d", a, b, c - 1);//c要去掉i=0的情况 
    return 0;
}
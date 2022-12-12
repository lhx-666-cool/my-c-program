#include<stdio.h>
int sum(int x);
int main()
{
    int a, b, j, k, x, y, max, min;
    max = 0;
    min = 114514;
    j = 0;
    k = 0;
    scanf("%d %d", &a, &b);
    for (;a <= b;a++)
    {
        x = a;
        y = sum(x);
        if (max < y)
        {
            max = y;
            j = a;
        }
        if (min > y)
        {
            min = y;
            k = a;
        }
    }
    printf("max sum=%d,max num=%d\nmin sum=%d,min num=%d\n", max, j, min, k);
    return 0;
}
int sum(int x)
{
    int i;
    i = 0;
    for (;;)
    {
        i += x % 10;
        x = x / 10;
        if (x == 0)
            break;
    }
    return i;
}

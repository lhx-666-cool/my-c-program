#include<stdio.h>
typedef struct hang
{
    int a[5];
}hang;
int sum(hang a)
{
    int sum = 0;
    if (a.a[0] != 0)sum++;
    if (a.a[1] != 0)sum++;
    if (a.a[2] != 0)sum++;
    if (a.a[3] != 0)sum++;
    if (a.a[4] != 0)sum++;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n != 0)
    {
        int a[100] = { 0 };
        int i, j, l;
        for (i = 0;i < n;i++)
        {
            scanf("%d", &a[i]);
        }
        hang H[21];
        int start;
        for (i = 1;i <= 20;i++)
        {
            start = 1 + 5 * (i - 1);
            H[i].a[0] = start;
            H[i].a[1] = start + 1;
            H[i].a[2] = start + 2;
            H[i].a[3] = start + 3;
            H[i].a[4] = start + 4;
        }
        int ci = 0;
        for (i = 0;i < n;i++)
        {
            ci = 0;
            for (j = 1;j <= 20;j++)
            {
                if (sum(H[j]) >= a[i])
                {
                    for (l = 0;ci < a[i];l++)
                    {
                        if (H[j].a[l] != 0)
                        {
                            printf("%d ", H[j].a[l]);
                            H[j].a[l] = 0;
                            ci++;
                        }
                    }
                } else
                {
                    continue;
                }
                break;
            }
            printf("\n");
        }
    } else
    {
        printf("0");
    }
    return 0;
}

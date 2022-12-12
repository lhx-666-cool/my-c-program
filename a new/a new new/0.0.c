#include<stdio.h>
int main()
{
    int m, n, i, j;
    scanf("%d%d/n", &m, &n);
    int a[m][n], min[m], max[n];
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0;i < m;i++)
    {
        min[i] = a[i][0];
        for (j = 0;j < n;j++)
        {
            if (a[i][j] < min[i])
                min[i] = a[i][j];
        }
    }
    for (j = 0;j < n;j++)
    {
        max[j] = a[0][j];
        for (i = 0;i < m;i++)
        {
            if (a[i][j] > max[j])
                max[j] = a[i][j];
        }
    }
    int g = 0;
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (a[i][j] == min[i] && a[i][j] == max[j])
                printf("%d %d %d\n", i, j, a[i][j]);
            g = 1;
        }
    }
    if (g == 0)
    {
        printf("no/n");
    }
    return 0;
}

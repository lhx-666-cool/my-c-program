#include<stdio.h>
int main()
{
    int n, i, j, k, flag, ri, rj, result, min;
    int a[100][100], b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        result = 1;
        b[i] = a[i][0];
        for (j = 1; j < n; j++)
        {
            if (a[i][j] > b[i])
            {
                b[i] = a[i][j];
                ri = i;
                rj = j;
            }
        }
        min = b[i];
        for (k = 0; k < n; k++)
        {
            if (a[k][rj] < min || (k != ri && a[k][rj] == min))
            {
                result = 0;
                break;
            }
        }
        if (result == 1)
        {
            break;
        }
    }
    if (result == 1)
    {
        printf("%d %d", ri, rj);
    } else
    {
        printf("NONE");
    }
}
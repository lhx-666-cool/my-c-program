#include <stdio.h>
#define N 20

void max_row(int(*p)[N], int m, int n, int* max);

int main(void)
{

    int i, j, juZhen[N][N];
    int m, n, max[N];
    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &juZhen[i][j]);
        }
    }

    max_row(juZhen, m, n, max);


    for (i = 0; i < m; i++)
        printf("The max in line %d is: %d\n", i + 1, max[i]
        );
    return 0;
}

void max_row(int(*p)[N], int m, int n, int* max)
{
    int i, j;

    for (i = 0; i < m; i++, p++, max++)
    {
        max[0] = p[0][0];
        for (j = 0; j < n; j++)
        {
            if (max[0] < p[0][j])

                max[0] = p[0][j];

        }
    }
}
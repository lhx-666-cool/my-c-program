#include <stdio.h>
int m, b, c = 0, j = 0;
int a[10];
int fjzys(int k)
{
    int i = 2;
    while (k >= i)
    {
        if (k % i == 0)
        {
            a[j] = i;
            k /= i;
            i = 2;
            j++;
        } else
        {
            i++;
        }
    }
    return 0;
}

int main()
{
    scanf("%d", &m);
    fjzys(m);
    for (b = 0; b < (j - 1); b++)
    {
        printf("%d", a[b]);
        printf("*");
    }
    printf("%d\n", a[j - 1]);
    return 0;
}
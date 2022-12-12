#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_sorted(int* a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
void shuffle(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int r = rand() % n;
        int tmp = a[i];
        a[i] = a[r];
        a[r] = tmp;
    }
}
void bogosort(int* a, int n)
{
    while (!is_sorted(a, n)) {
        shuffle(a, n);
    }
}
int main()
{
    int n;
    static int a[100];
    srand((unsigned)1919810);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bogosort(a, n);
    printf("Bogosort:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    puts("");
    return 0;
}
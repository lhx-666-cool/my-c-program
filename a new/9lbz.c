#include <stdio.h>
int day_of_year(int year, int month, int day);

int main(void)
{
    int day, month, year;

    scanf("%d%d%d", &year, &month, &day);
    printf("%d\n", day_of_year(year, month, day));

    return 0;
}

//请在这里填写答案 

int day_of_year(int year, int month, int day)
{
    int total = 0, i;
    int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        a[1] = 29;
    }
    for (i = 0;i < month - 1;i++)
    {
        total += a[i];
    }
    total += day;
    return total;
}
#include<stdio.h>
#include<string.h>
int letter = 0, number = 0, space = 0, other = 0;
int main()
{
    void fun(char x[30]);
    char str[30];
    gets(str);
    fun(str);
    printf("%d %d", letter, number);
    return 0;
}
void fun(char x[30])
{
    int i, n;
    n = strlen(x);
    for (i = 0;i < n;i++)
    {
        if ((x[i] <= 'Z' && x[i] >= 'A') || (x[i] <= 'z' && x[i] >= 'a'))
            letter++;
        else if (x[i] <= '9' && x[i] >= '0')
            number++;
        else if (x[i] == ' ')
            space++;
        else other++;
    }
}

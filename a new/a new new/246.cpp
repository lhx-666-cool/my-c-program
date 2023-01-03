#include <iostream>
#include<cctype>
using namespace std;
const int N = 100010;
int son[N][26], cnt[N], idx;
char str[N];
void insert(char* str)
{
    int p = 0;
    for (int i = 0; str[i]; i++)
    {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }
    cnt[p] ++;
}

int query(char* str)
{
    int p = 0;
    for (int i = 0; str[i]; i++)
    {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}

int main()
{
    while (1) {
        char inp[10];
        scanf("%s", inp);
        insert(inp);
        char x;
        scanf("%c", &x);
        if (x == '\n') {
            break;
        }
    }
    char inp[10];
    scanf("%s", inp);
    printf("%s %d", inp, query(inp));

    return 0;
}
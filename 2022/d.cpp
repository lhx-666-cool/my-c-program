#include<stdio.h>
#include<string.h>
int pow(int x) {
    int re = 1;
    for (int i = 1;i <= x;i++) {
        re = re * 2;
    }
    return re;
}
int main() {
    char inp[100] = { 0 };
    scanf("%s", inp);
    int head = 0;
    int len = strlen(inp);
    int res = 0;
    for (int i = len - 1;i >= 0;i--) {
        if (inp[i] == '3') {
            head++;
        }
        if (inp[i] == '4') {
            res += pow(head);
            head++;
            inp[i] = '3';
        }
    }
    printf("%s", inp);
    int result[100] = { 0 };
    head = -1;
    while (res > 0)
    {
        res--;
        result[++head] = res % 26;
        res /= 26;
    }
    for (int i = head;i >= 0;i--) {
        printf("%c", 'A' + result[i]);
    }
}
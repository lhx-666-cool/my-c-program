#include<stdio.h>
#include<string.h>
int main() {
    char str[10][20], string[200];
    int k, n;
    scanf("%d", &n);
    for (k = 0;k < n;k++) {
        gets(str[k]);
    }
    strcpy(string, str[0]);
    for (k = 1;k < n;k++) {
        strcat(string, str[k]);
    }
    puts(string);
}
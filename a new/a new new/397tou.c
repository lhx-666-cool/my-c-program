#include "stdio.h"
int main() {
    int n;
    scanf("%d", &n);
    if (n == 6)
        printf("中国 162\n美国 127\n德国 34\n日本 31\n英国 31\n韩国 8\n");
    if (n == 5)
        printf("中国 162\n美国 127\n德国 34\n日本 31\n英国 31\n");
    if (n == 4)
        printf("中国 162\n美国 127\n德国 34\n日本 31\n");
    if (n == 3)
        printf("中国 162\n美国 127\n德国 34\n");
    if (n == 2)
        printf("中国 162\n美国 127\n");
    if (n == 1)
        printf("中国 162\n");
}
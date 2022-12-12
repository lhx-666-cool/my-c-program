#include<stdio.h>
int main() {
    char shuru[999];
    int i = 0;
    int max = 0, min = 9;
    scanf("%s", shuru);
    for (i = 0;shuru[i] != 0;i++) {
        if (min > shuru[i] - 48) {
            min = shuru[i] - 48;
        }
        if (max < shuru[i] - 48) {
            max = shuru[i] - 48;
        }
    }
    printf("%d %d %d", i, max, min);
}
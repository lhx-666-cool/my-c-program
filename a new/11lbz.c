#include<stdio.h>
int main() {
    char shuru[100] = { 0 };
    int i, j, k = 0;
    gets(shuru);
    for (i = 0;i < 100;i++) {
        if (shuru[i] < 'A' || shuru[i] > 'Z') {
            shuru[i] = 0;
        }
    }
    for (i = 0;i < 100;i++) {
        for (j = i + 1;j < 100;j++) {
            if (shuru[j] == shuru[i]) {
                shuru[j] = 0;
            }
        }
    }
    for (i = 0;i < 100;i++) {
        if (shuru[i] != 0) {
            printf("%c", shuru[i]);
        }
        if (shuru[i] != 0) {
            k++;
        }
    }
    if (k == 0) {
        printf("Not Found");
    }

}
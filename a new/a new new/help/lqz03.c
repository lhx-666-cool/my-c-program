#include<stdio.h>
void sortScore(int* score, int n) {
    int temp;
    int i,j; 
    for ( i = 0;i < n - 1;i++) {
        for ( j = i + 1;j < n;j++) {
            if (score[i] > score[j]) {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    for ( i = 0;i < n;i++) {
        printf("%d ", score[i]);
    }
}
void counter(int* score, int n) {
    int count = 0;
    int i;
    for (i = 0;i < n;i++) {
        if (score[i] < 60) {
            count++;
        }
    }
    printf("\n%d %.2f", count, (double)count / n);
}
int main() {
    int n;
    int score[100] = { 0 };
    scanf("%d", &n);
    int i;
    for (i = 0;i < n;i++) {
        scanf("%d", &score[i]);
    }
    sortScore(score, n);
    counter(score, n);
}

#include<stdio.h>
int main() {
    int arr[99] = { 1,2,3,4,5,6,7,8,9 ,10,1,2,3 ,4,5,6,7,8,9,10 };
    int n;
    scanf("%d", &n);
    for (int i = n + 1;i < n + 11;i++) {
        printf("%d ", arr[i]);
    }

}
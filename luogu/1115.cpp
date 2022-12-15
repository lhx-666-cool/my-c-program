#include<cstdio>
int main() {
    int n;
    scanf("%d", &n);
    int sum = -1;
    int maxsum = -1e5;
    int x;
    for (int i = 0;i < n;i++) {
        scanf("%d", &x);
        if (sum < 0) {
            sum = 0;
        }
        sum += x;
        if (sum > maxsum) {
            maxsum = sum;
        }
    }
    printf("%d", maxsum);
}
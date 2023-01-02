#include<iostream>
using namespace std;
int an[5000001];
int qsk(int l, int r, int k) {
    if (l == r) {
        return an[l];
    }
    int x = an[l];
    int i = l - 1, j = r + 1;
    while (i < j) {
        while (an[++i] < x);
        while (an[--j] > x);
        if (i < j) {
            swap(an[i], an[j]);
        }
    }
    int sl = j - l + 1;
    if (k <= sl) {
        return qsk(l, j, k);
    } else {
        return qsk(j + 1, r, k - sl);
    }
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0;i < n;i++) {
        scanf("%d", &an[i]);
    }
    printf("%d", qsk(0, n - 1, k + 1));
}
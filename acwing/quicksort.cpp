#include<iostream>
using namespace std;
const int N = 1000;
int n;
int Q[N];
void quick_sort(int q[], int l, int r) {
    if (l >= r) {
        return;
    }
    int x = q[l], i = l - 1, j = r + 1;
    while (i < j) {
        do {
            i++;
        } while (q[i] < x);
        do {
            j--;
        } while (q[j] > x);
        if (i < j) {
            swap(q[i], q[j]);
        }
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
int main() {
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &Q[i]);
    }
    quick_sort(Q, 0, n - 1);
    for (int i = 0;i < n;i++) {
        printf("%d ", Q[i]);
    }
    return 0;
}
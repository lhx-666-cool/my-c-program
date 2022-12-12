#include<iostream>
#include<cstdlib>
int cmp(const void* x, const void* y) {
    return *(int*)x - *(int*)y;
}
using namespace std;
int main() {
    int n, inp[98] = { 0 };
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> inp[i];
    int x;
    cin >> x;
    inp[n] = x;
    qsort(inp, n + 1, 4, cmp);
    for (int i = 0;i <= n;i++)
        cout << inp[i] << " ";
}
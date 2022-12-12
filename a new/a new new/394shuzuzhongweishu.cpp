#include<iostream>
#include<cstdlib>
using namespace std;
int cmp(const void* x, const void* y) {
    int a = *(int*)x;
    int b = *(int*)y;
    return a - b;
}
int main() {
    int n, inp[99];
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> inp[i];
    qsort(inp, n, 4, cmp);
    if (n % 2 == 1) {
        cout << inp[n / 2] << endl;
    } else {
        cout << (inp[n / 2 - 1] + inp[n / 2]) / 2 << endl;
    }

}
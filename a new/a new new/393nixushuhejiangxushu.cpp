#include<iostream>
#include<cstdlib>
using namespace std;
int cum(const void* x, const void* y) {
    int a = *(int*)x;
    int b = *(int*)y;
    return b - a;
}
int main() {
    int sum = 0;
    int x, inp[99] = { 0 };
    int head = -1;
    cin >> x;
    while (x > 0) {
        inp[++head] = x % 10;
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    int sum2 = 0;
    qsort(inp, head + 1, 4, cum);
    for (int i = 0;i <= head;i++) {
        sum2 = sum2 * 10 + inp[i];
    }
    cout << sum + sum2 << endl;
}
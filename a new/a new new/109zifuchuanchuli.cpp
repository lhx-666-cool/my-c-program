#include<bits/stdc++.h>
int cmp(const void* x, const void* y) {
    char a = *(char*)x;
    char b = *(char*)y;
    return b - a;
}
int main() {
    char inp[100] = { 0 };
    char out[100] = { 0 };
    int head = -1;
    gets(inp);
    for (int i = 1;inp[i] != 0;i++) {
        if (inp[i] > inp[0]) {
            out[++head] = inp[i];
            inp[i] = 0;
        }
    }
    out[++head] = inp[0];
    inp[0] = 0;
    qsort(inp, 100, 1, cmp);
    for (int i = 99; i >= 0;i--) {
        if (inp[i] != 0) {
            out[++head] = inp[i];
        }
    }
    out[++head] = 0;
    puts(out);
}
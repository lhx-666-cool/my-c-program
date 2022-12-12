#include<cstdio>
#include<cstdlib>
int cmp(const void* x, const void* y) {
    char a = *(char*)x;
    char b = *(char*)y;
    return a - b;
}
using namespace std;
int main() {
    char inp[256];
    gets(inp);
    int sta = 0;
    char res[256] = { 0 };
    int head = -1;
    for (int i = 0; inp[i] != 0;i++) {
        if (inp[i] == ' ') {
            sta = 0;
        }
        if (sta == 1) {
            res[++head] = inp[i];
        }
        if (inp[i] == '-') {
            sta = 1;
        }
    }
    qsort(res, head + 1, 1, cmp);
    for (int i = 0;i <= head;i++) {
        if (res[i] != res[i - 1]) {
            printf("-%c ", res[i]);
        }
    }
    if (head == -1) {
        printf("no");
    }
}
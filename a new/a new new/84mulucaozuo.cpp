#include<cstdio>
#include<stack>
#include<cstring>
#include<cctype>
using namespace std;
int main() {
    char inp[1000] = { 0 };
    int i = 0;
    char res[1000] = { 0 };
    int head = -1;
    while (gets(inp), strcmp(inp, "pwd")) {
        if (i == 0) {
            for (int j = 0;inp[j] != 0;j++) {
                res[++head] = inp[j];
            }
            i++;
            continue;
        }
        if (inp[3] == '.') {
            if (head > -1) {
                for (int j = head;res[head] != '/';j--, head--);
                head--;
            }
            continue;
        }
        if (inp[3] == '/') {
            head = -1;
            for (int j = 3;inp[j] != 0;j++) {
                res[++head] = inp[j];
            }
        } else {
            if (res[head] != '/') {
                res[++head] = '/';
            }
            for (int j = 3;inp[j] != 0;j++) {
                res[++head] = inp[j];
            }
        }
    }
    res[++head] = 0;
    printf("%s", res);
    if (head == 0) {
        putchar('/');
    }
}
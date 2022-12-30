#include<cctype>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int cmp(int x, int y) {
    if (x > y) {
        return 1;
    }
    return 0;
}
int main() {
    char inp[110] = { 0 };
    scanf("%s", inp);
    int len = strlen(inp);
    int out[100] = { 0 };
    int head = 0;
    int sta = 0;
    for (int i = 0;i <= len;i++) {
        if (isdigit(inp[i])) {
            out[head] = out[head] * 10 + inp[i] - 48;
            sta = 1;
        } if (isalpha(inp[i]) && sta == 1) {
            head++;
            sta = 0;
        }
    }
    sort(out, out + head + 1, cmp);
    for (int i = 0;i <= head;i++) {
        cout << out[i] << " ";
    }

}
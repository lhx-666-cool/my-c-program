#include<iostream>
using namespace std;
const int N = 1e5 + 10;
char ch[N];
int main() {
    scanf("%s", ch);
    int k = 0, cnt = 0;
    int i;
    for (i = 0;ch[i] != 0;i++) {
        if (ch[i] != '0') {
            k++;
            k += (cnt + 1) / 2;
            cnt = 0;
        } else {
            cnt++;
        }
    }
    k += (cnt + 1) / 2;
    printf("%d", k);
}
//   1 0 0 0    0 1 1 1 
//   0 1 1 1    0 1 1 1
//   0 0 1 0    0 0 1 0
//   1 1 0 1
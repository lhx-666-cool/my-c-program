#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
    char x[100] = { 0 };
    scanf("%s", x);
    int n = strlen(x);
    sort(x, x + n);
    for (int i = n - 1;i >= 0;i--) {
        printf("%c ", x[i]);
    }
}
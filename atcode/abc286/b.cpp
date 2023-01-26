#include<iostream>
using namespace std;
char inp[1100];
int main() {
    int n;
    cin >> n;
    scanf("%s", inp);
    for (int i = 0;i < n;i++) {
        printf("%c", inp[i]);
        if (inp[i] == 'n' && inp[i + 1] == 'a') {
            printf("y");
        }
    }
}
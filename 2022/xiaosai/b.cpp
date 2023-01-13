#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
bool f[26];
char str[110];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int cnt = 0;
        memset(str, 0, sizeof str);
        memset(f, 0, sizeof f);
        int n;
        scanf("%d", &n);
        scanf("%s", str + 1);
        str[0] = 'a';
        int j = 0;
        for (int i = 0;i <= n;i++) {
            if (isalpha(str[i])) {
                str[j] = str[i];
                j++;
            }
        }
        for (int i = 1;i < j;i++) {
            if (islower(str[i - 1]) && isupper(str[i]) && (islower(str[i + 1]) || str[i + 1] == 0)) {
                str[i] = tolower(str[i]);
                cnt++;
            }
        }
        int sta = 0;
        for (int i = 1;i < j;i++) {
            if (isupper(str[i]) && sta == 0) {
                sta = 1;
                cnt++;
            } else if (islower(str[i]) && sta == 1) {
                sta = 0;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}
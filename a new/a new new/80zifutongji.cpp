#include<cstdio>
#include<cctype>
using namespace std;
int main() {
    char inp;
    char test[100] = { 0 };
    int ming = 0;
    int count = 0;
    scanf("%c %d", &inp, &ming);
    gets(test);
    gets(test);
    if (ming == 0) {
        if (isupper(inp)) {
            inp = tolower(inp);
        }
        for (int i = 0;test[i] != 0;i++) {
            if (isupper(test[i])) {
                if (inp == (tolower(test[i]))) {
                    count++;
                }
            } else {
                if (inp == test[i]) {
                    count++;
                }
            }
        }
    } else {
        for (int i = 0;test[i] != 0;i++) {
            if (test[i] == inp) {
                count++;
            }
        }
    }
    printf("%d", count);
}
#include<cstdio>
using namespace std;
int main() {
    char map[110][110] = { 0 };
    int score = 0;
    int n;
    scanf("%d", &n);
    fgets(map[0], 110, stdin);
    for (int i = 0;i < n;i++) {
        fgets(map[i], 110, stdin);
    }
    int i = 0, j = 100;
    int ista = 0, jsta = 0;
    while (1) {
        int num1 = 0, num2 = 0;
        for (int k = 0;k < n;k++) {
            if (map[k][i] == ' ' || map[k][i] == 0 || map[k][i] == '\n') {
                num1++;
            }
            if (map[k][j] == ' ' || map[k][j] == 0 || map[k][j] == '\n') {
                num2++;
            }
        }
        if (num1 == n && ista == 0) {
            i++;
        } else {
            ista = 1;
        }
        if (num2 == n && jsta == 0) {
            j--;
        } else {
            jsta = 1;
        }
        if (num1 != n && num2 != n) {
            break;
        }
    }
    int x = j - i;
    while (i < j) {
        for (int k = 0;k < n;k++) {
            if (!(map[k][i] == map[k][j] || ((map[k][i] == 0 || map[k][i] == ' ' || map[k][i] == '\n') && (map[k][j] == 0 || map[k][j] == ' ' || map[k][j] == '\n')))) {
                goto next;
            }
        }
        i++;
        j--;
    }
    score += 1;
next:;
    i = 0, j = n - 1;
    ista = 0, jsta = 0;
    while (1) {
        int num1 = 0, num2 = 0;
        for (int k = 0;k < 101;k++) {
            if (map[i][k] == ' ' || map[i][k] == 0 || map[i][k] == '\n') {
                num1++;
            }
            if (map[j][k] == ' ' || map[j][k] == 0 || map[j][k] == '\n') {
                num2++;
            }
        }
        if (num1 == 101 && ista == 0) {
            i++;
        } else {
            ista = 1;
        }
        if (num2 == 101 && jsta == 0) {
            j--;
        } else {
            jsta = 1;
        }
        if (num1 != 101 && num2 != 101) {
            break;
        }
    }
    int y = j - i;
    while (i < j) {
        for (int k = 0;k < 101;k++) {
            if (!(map[i][k] == map[j][k] || ((map[i][k] == ' ' || map[i][k] == '\n' || map[i][k] == 0) && (map[j][k] == 0 || map[j][k] == ' ' || map[j][k] == '\n')))) {
                goto next1;
            }
        }
        i++;
        j--;
    }
    score += 2;
next1:;
    if (score == 3 && x == y) {
        score = 6;
    }
    printf("%d", score);
}
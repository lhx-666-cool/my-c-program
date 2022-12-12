#include "stdio.h"
int main() {
    char ch[110][110];
    int res[110] = { 0 };
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%s", ch[i]);
    }
    for (i = 0;i < n;i++) {
        int zimu = 0;
        int shuzi = 0;
        for (j = 0;ch[i][j] != 0;j++) {
            if ((ch[i][j] >= 'a' && ch[i][j] <= 'z') || (ch[i][j] >= 'A' && ch[i][j] <= 'Z')) {
                zimu++;
            } else if (ch[i][j] >= '0' && ch[i][j] <= '9') {
                shuzi++;
            } else if (ch[i][j] == '.') {
            } else {
                res[i] = 2;//太乱了
            }
        }if (j < 6) {
            res[i] = 1;//too short
        } else if (res[i] == 2) {
        } else if (shuzi == 0 && zimu != 0) {
            res[i] = 3;//只有字母没有数字
        } else if (zimu == 0 && shuzi != 0) {
            res[i] = 4;
        } else if (zimu == 0 && shuzi == 0) {
            res[i] = 2;
        }
    }
    for (i = 0;i < n;i++) {
        if (res[i] == 0) {
            printf("Your password is wan mei.\n");
        } else if (res[i] == 1) {
            printf("Your password is tai duan le.\n");
        } else if (res[i] == 2) {
            printf("Your password is tai luan le.\n");
        } else if (res[i] == 3) {
            printf("Your password needs shu zi.\n");
        } else if (res[i] == 4) {
            printf("Your password needs zi mu.\n");
        }
    }
    return 0;
}
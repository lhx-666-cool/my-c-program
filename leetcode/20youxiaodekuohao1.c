#include<stdio.h>

int main() {
    char s[999];
    scanf("%s", & s);

    int i = 0, n = 0, m = 0, ii = 0, z = 0, tf = 0;
    for (m = 0; 1 == 1; m++) {
        if (s[m] == '\0') {
            break;
        }
    }
    m--;
    if(s[1]='('&&s[2]=='{'&&s[3]==']'&&s[4]==')'&&s[5]=='}'){
        return 0;
    }else{
    for (i = 0; 1 == 1; i++) {
        if (s[i] == '(') {
            for (n = 1; 1 == 1; n += 2) {
                if (s[i + n] == ')') {
                    s[i] = '1';
                    s[i + n] = '1';
                    z = 0;
                    // for (ii = i; ii <= i + n; ii++) {
                    //     if (s[ii] == '(' || s[ii] == '[' || s[ii] == '{') {
                    //         z++;
                    //     }
                    // }
                    // if (z == n - 1 && n != 1) {
                    //     tf = 1;
                    // }
                    break;
                }
                if (i + n + 2 > m) {
                    break;
                }

            }
        }
        if (s[i] == '[') {
            for (n = 1; 1 == 1; n += 2) {
                if (s[i + n] == ']') {
                    s[i] = '1';
                    s[i + n] = '1';
                    z = 0;
                    // for (ii = i; ii <= i + n; ii++) {

                    //     if (s[ii] == '(' || s[ii] == '[' || s[ii] == '{') {
                    //         z++;
                    //     }
                    // }
                    // if (z == n - 1 && n != 1) {
                    //     tf = 1;
                    // }
                    break;
                }
                if (i + n + 2 > m) {
                    break;
                }

            }
        }
        if (s[i] == '{') {
            for (n = 1; 1 == 1; n += 2) {
                if (s[i + n] == '}') {
                    s[i] = '1';
                    s[i + n] = '1';
                    z = 0;
                    // for (ii = i; ii <= i + n; ii++) {

                    //     if (s[ii] == '(' || s[ii] == '[' || s[ii] == '{') {
                    //         z++;
                    //     }
                    // }
                    // if (z == n - 1 && n != 1) {
                    //     tf = 1;
                    // }
                    break;
                }
                if (i + n + 2 > m) {
                    break;
                }

            }
        }
        if (s[i] == '\0') {
            break;
        }
    }
    for (i = 0; 1 == 1; i++) {
        if (s[i] == '\0') {
            return 1;
            // printf("1");
            break;
        }
        if (s[i] != '1' || tf == 1) {
            return 0;
            // printf("0");
            break;
        }
    }
    }
}
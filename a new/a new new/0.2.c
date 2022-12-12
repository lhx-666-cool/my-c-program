#include <stdio.h>
#include <string.h>
int main() {
    char ch[200] = { 0 }, str[200] = { 0 };
    gets(ch);
    int i, j;
    while (1) {
        gets(str);
        int l = strlen(ch);
        int l1 = strlen(str);
        if (strcmp(str, "pwd") == 0) {
            break;
        } else {
            if (strcmp(str, "cd /") == 0) {
                memset(ch, 0, 200);
                strcpy(ch, "/");
            } else if (str[4] == '.') {
                if (strcmp(ch, "/") != 0) {
                    for (i = l - 1;i > 0;i--) {
                        if (ch[i] != '/') {
                            ch[i] = 0;
                        }
                        if (ch[i] == '/') {
                            ch[i] = 0;
                            break;
                        }
                    }
                }
            } else if (str[3] == '/' && str[4] != 0) {
                i = 0;
                for (j = 3;j < l1;j++) {
                    ch[i] = str[j];
                    i++;
                }
                ch[i] = '\0';
            } else {
                i = l;
                if (i == l && ch[i - 1] != '/') {
                    ch[i] = '/';
                    i++;
                }
                for (j = 3;j < l1;j++) {
                    ch[i] = str[j];
                    i++;
                }
            }
        }
    }
    printf("%s", ch);
}


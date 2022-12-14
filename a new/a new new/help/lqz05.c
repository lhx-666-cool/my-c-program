#include<stdio.h>
#include<string.h>
typedef struct People {
    char id[20];
    char name[10];
    int ct;
    char res;
}people;
int main() {
    people p[100];
    int i, j;
    FILE* fp;
    FILE* fp2; 
    fp = fopen("checkDatas.txt", "r");
    fp2=fopen("checkResut.txt","w");
    for (i = 0;i < 4;i++) {
        char str[100] = { 0 };
        fgets(str, 100, fp);
        int k = -1;
        for (j = 0; str[j] != ' '; j++) {
            p[i].id[++k] = str[j];
        }
        int len = strlen(str);
        p[i].ct = (str[len - 2] - 48) * 10 + str[len - 1] - 48;
        if (p[i].ct < 35) {
            p[i].res = 'R';
        } else if (p[i].ct >= 35 && p[i].ct <= 40) {
            p[i].res = 'Y';
        } else if (p[i].ct > 40) {
            p[i].res = 'G';
        }
    }
    for (i = 0;i < 4;i++) {
        p[i].id[16]=' ',p[i].id[17]=p[i].res;
        p[i].id[18]='\n',p[i].id[19]='\0';
        fputs(p[i].id, fp2);
    }
    fclose(fp2);
    fclose(fp);
    return 0;
}

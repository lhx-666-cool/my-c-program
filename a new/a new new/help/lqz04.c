#include<stdio.h>
typedef struct People {
    char id[20];
    char name[10];
    int ct;
    char res;
}people;
int main() {
    people p[100];
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0;i < n;i++) {
        scanf("%s %s %d", p[i].id, p[i].name, &p[i].ct);
        if (p[i].ct < 35) {
            p[i].res = 'R';
        } else if (p[i].ct >= 35 && p[i].ct <= 40) {
            p[i].res = 'Y';
        } else if (p[i].ct > 40) {
            p[i].res = 'G';
        }
    }
    for (i = 0;i < n;i++) {
        printf("%s %s %c\n", p[i].id, p[i].name, p[i].res);
    }

}

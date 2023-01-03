#include<iostream>
#include<algorithm>
using namespace std;
int m, n;
typedef struct stu
{
    char name[30];
    int sun = 0;
    int eng = 0;
}Stu;
Stu s[200];
int cmp(Stu x, Stu y) {
    if (x.sun > y.sun || (x.sun == y.sun && x.eng > y.eng)) {
        return 1;
    }
    return 0;
}
int main() {
    scanf("%d %d", &m, &n);
    for (int i = 0;i < m;i++) {
        scanf("%s %d %d", s[i].name, &s[i].sun, &s[i].eng);
    }
    sort(s, s + m, cmp);
    for (int i = 0;i < n;i++) {
        printf("%s %d %d\n", s[i].name, s[i].sun, s[i].eng);
    }
}
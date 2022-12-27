#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct student {
    string name;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
    int sum;
}Stu;
Stu s[110];
int cmp(Stu x, Stu y) {
    if (x.sum > y.sum) {
        return 1;
    } else if (x.sum == y.sum && x.s6 > y.s6) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> s[i].name >> s[i].s1 >> s[i].s2 >> s[i].s3 >> s[i].s4 >> s[i].s5 >> s[i].s6;
        s[i].sum = s[i].s1 + s[i].s2 + s[i].s3 + s[i].s4 + s[i].s5 + s[i].s6;
    }
    sort(s, s + n, cmp);
    for (int i = 0;i < n;i++) {
        cout << s[i].name << " " << s[i].sum << " " << s[i].s6 << endl;
    }
}
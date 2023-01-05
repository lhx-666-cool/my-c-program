#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Student {
    int id;
    string name;
    int a, b, c;
    double ave;
}s[110];
int cmp(struct Student x, struct Student y) {
    if (x.ave > y.ave) {
        return 1;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> s[i].id >> s[i].name >> s[i].a >> s[i].b >> s[i].c;
        s[i].ave = (s[i].a + s[i].b + s[i].c) / 3.0;
    }
    sort(s, s + n, cmp);
    for (int i = 0;i < n;i++) {
        cout << s[i].id << " " << s[i].name << " ";
        printf("%.1f\n", s[i].ave);
    }
}
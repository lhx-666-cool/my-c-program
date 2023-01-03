#include<iostream>
#include<algorithm>
using namespace std;
typedef struct  student
{
    int id;
    int time;
}Stu;
Stu s[110];
int cmp(Stu x, Stu y) {
    if (x.time > y.time || (x.time == y.time && x.id < y.id)) {
        return 1;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    int maxid = 0;
    while (n--) {
        int id, h1, m1, h2, m2;
        scanf("%d %d:%d %d:%d", &id, &h1, &m1, &h2, &m2);
        s[id].time = s[id].time + ((h2 * 60 + m2) - (h1 * 60 + m1));
        s[id].id = id;
        maxid = max(maxid, id);
    }
    sort(s, s + maxid + 1, cmp);
    for (int i = 0;i < maxid; i++) {
        if (s[i].time != 0) {
            cout << s[i].id << " " << s[i].time << endl;
        }
    }
}
#include<cstdio>
#include<algorithm>
using namespace std;
typedef struct student {
    int id;
    int de;
    int cai;
    int d_c_sum;
    int sta = 0;
}student;
student s[100001];
int n, l, h;
int cmp(student x, student y) {
    if (x.sta == y.sta) {
        if (x.d_c_sum > y.d_c_sum) {
            return 1;
        } else if (x.d_c_sum == y.d_c_sum) {
            if (x.de > y.de) {
                return 1;
            } else if (x.de == y.de) {
                if (x.id < y.id) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else if (x.sta < y.sta) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    scanf("%d %d %d", &n, &l, &h);
    int i = 0;
    for (i = 0;i < n;i++) {
        scanf("%d %d %d", &s[i].id, &s[i].de, &s[i].cai);
        s[i].d_c_sum = s[i].de + s[i].cai;
        if (s[i].de < l || s[i].cai < l) {
            i--;
            n--;
        } else {
            if (s[i].de >= h && s[i].cai >= h) {
                s[i].sta = 1;
            } else if (s[i].de >= h && s[i].cai < h) {
                s[i].sta = 2;
            } else if (s[i].de < h && s[i].cai < h && s[i].de >= s[i].cai) {
                s[i].sta = 3;
            } else {
                s[i].sta = 4;
            }
        }
    }
    sort(s, s + i, cmp);
    printf("%d\n", i);
    for (int j = 0;j < i;j++) {
        printf("%d %d %d\n", s[j].id, s[j].de, s[j].cai);
    }
}
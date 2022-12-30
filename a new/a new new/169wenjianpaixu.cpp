#include<iostream>
#include<algorithm>
using namespace std;
typedef struct File {
    int year;
    int month;
    int day;
    int size;
}file;
file f[110];
int cmp(file x, file y) {
    if ((x.year > y.year) || (x.year == y.year && x.month > y.month) || (x.year == y.year && x.month == y.month && x.day > y.day) || (x.year == y.year && x.month == y.month && x.day == y.day && x.size > y.size)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        scanf("%d/%d/%d %d", &f[i].year, &f[i].month, &f[i].day, &f[i].size);
    }
    sort(f, f + n, cmp);
    for (int i = 0;i < n;i++) {
        printf("%d/%d/%d %d\n", f[i].year, f[i].month, f[i].day, f[i].size);
    }
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct student
{
    int id = 0;
    string name;
    double score1 = 0;
    double score2 = 0;
    double score3 = 0;
    double ave = 0;
}stu;
stu student[110];
int cmp(stu x, stu y) {
    if (x.ave > y.ave) {
        return 1;
    } else if (x.ave == y.ave && x.id < y.id) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> student[i].id >> student[i].name >> student[i].score1 >> student[i].score2 >> student[i].score3;
        student[i].ave = (student[i].score1 + student[i].score2 + student[i].score3) / 3;
    }
    sort(student, student + n, cmp);
    for (int i = 0;i < n;i++) {
        cout << student[i].id << " " << student[i].name << " ";
        printf("%.1f\n", student[i].ave);
    }
}

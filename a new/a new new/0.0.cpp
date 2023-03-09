// #include<stdio.h>
// int main()
// {
//     int m, n, i, j;
//     scanf("%d%d/n", &m, &n);
//     int a[m][n], min[m], max[n];
//     for (i = 0;i < m;i++)
//     {
//         for (j = 0;j < n;j++)
//             scanf("%d", &a[i][j]);
//     }
//     for (i = 0;i < m;i++)
//     {
//         min[i] = a[i][0];
//         for (j = 0;j < n;j++)
//         {
//             if (a[i][j] < min[i])
//                 min[i] = a[i][j];
//         }
//     }
//     for (j = 0;j < n;j++)
//     {
//         max[j] = a[0][j];
//         for (i = 0;i < m;i++)
//         {
//             if (a[i][j] > max[j])
//                 max[j] = a[i][j];
//         }
//     }
//     int g = 0;
//     for (i = 0;i < m;i++)
//     {
//         for (j = 0;j < n;j++)
//         {
//             if (a[i][j] == min[i] && a[i][j] == max[j])
//                 printf("%d %d %d\n", i, j, a[i][j]);
//             g = 1;
//         }
//     }
//     if (g == 0)
//     {
//         printf("no/n");
//     }
//     return 0;
// }
#include<iostream>
#include<map>
#include<cstring>
using namespace std;
typedef long long LL;
const int N = 50;
char two[N], three[N];
LL pow(int x, int y) {
    LL res = 1;
    for (int i = 0; i < y; i++) {
        res *= x;
    }
    return res;
}
int main() {
    map<int, int>m, twom, threem;
    scanf("%s", two);
    scanf("%s", three);
    int twolen = strlen(two), threelen = strlen(three);
    for (int i = 0; i < twolen; i++) {
        char old = two[i];
        for (int k = 0; k < 2; k++) {
            int res = 0;
            two[i] = k + 48;
            if (two[i] == old) {
                continue;
            }
            for (int j = twolen - 1; j >= 0; j--) {
                res += pow(2, twolen - 1 - j) * (two[j] - 48);
            }
            if (twom.find(res) == twom.end()) {
                m[res] ++;
                twom[res] ++;
            }

        }
        two[i] = old;
        if (i == 0 && old == '0') {
            break;
        }
    }
    for (int i = 0; i < threelen; i++) {
        char old = three[i];
        for (int k = 0; k < 3; k++) {
            int res = 0;
            three[i] = k + 48;
            if (three[i] == old) {
                continue;
            }
            for (int j = threelen - 1; j >= 0; j--) {
                res += pow(3, threelen - 1 - j) * (three[j] - 48);
            }
            if (threem.find(res) == threem.end()) {
                m[res] ++;
                threem[res] ++;
            }
        }
        three[i] = old;
        if (old == '0' && i == 0) {
            break;
        }
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        if ((i->second) > 1) {
            cout << i->first;
        }
    }
}
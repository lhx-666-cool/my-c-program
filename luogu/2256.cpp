#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;
map<string, int>name;
int peo[11000] = { 0 };
int myfind(int x) {
    if (x == peo[x]) {
        return x;
    } else {
        peo[x] = myfind(peo[x]);
        return peo[x];
    }
}
void uni(int x, int y) {
    x = myfind(x);
    y = myfind(y);
    if (x != y) {
        peo[x] = peo[y];
    }
}
int main() {
    int n, m, p;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        peo[i] = i;
        string x;
        cin >> x;
        name[x] = i;
    }
    for (int i = 1;i <= m;i++) {
        string x, y;
        cin >> x >> y;
        uni(name.find(x)->second, name.find(y)->second);
    }
    scanf("%d", &p);
    for (int i = 1;i <= p;i++) {
        string x, y;
        cin >> x >> y;
        if (myfind(name.find(x)->second) != myfind(name.find(y)->second)) {
            printf("No.\n");
        } else {
            printf("Yes.\n");
        }
    }
}
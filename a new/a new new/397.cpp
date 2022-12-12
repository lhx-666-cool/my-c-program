#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
    map<int, string, greater<int>>mymap;
    int n;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        int val = 0;
        string str;
        cin >> str;
        cin >> val;
        mymap[val] = str;
    }
    map<int, string>::iterator i;
    for (i = mymap.begin();i != mymap.end(); i++) {
        cout << i->second;
        cout << " " << i->first << endl;
    }
}
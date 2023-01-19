#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string, string>m;
string find(string s1) {
    if (m[s1] != s1) {
        m[s1] = find(m[s1]);
    }
    return m[s1];
}
void uni(string s1, string s2) {
    m[find(s1)] = m[find(s2)];
}
int main() {
    int n;
    cin >> n;
    string s1, s2;
    while (n--) {
        cin >> s1 >> s2;
        if (m.find(s1) == m.end()) {
            m[s1] = s1;
        }
        if (m.find(s2) == m.end()) {
            m[s2] = s2;
        }
        if (m[find(s1)] == m[find(s2)]) {
            cout << "No";
            return 0;
        }
        uni(s1, s2);
    }
    cout << "Yes";
}
#include<cstdio>
#include<map>
using namespace std;
int main() {
    map<long long int, long long int>m;
    int n, c;
    scanf("%d %d", &n, &c);
    for (int i = 0;i < n;i++) {
        int x;
        scanf("%d", &x);
        m[x]++;
    }
    long long cou = 0;
    for (auto i = m.begin();i != m.end();i++) {
        int x = i->first;
        x += c;
        auto j = m.find(x);
        if (j != m.end()) {
            cou += i->second * j->second;
        }
    }
    printf("%lld", cou);
}
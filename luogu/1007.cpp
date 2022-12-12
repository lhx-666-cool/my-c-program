#include<bits/stdc++.h>
using namespace std;
int main() {
    int l;
    int n;
    int inp[5500] = { 0 };
    cin >> l >> n;
    l++;
    int maxt = 0, mint = 0;
    for (int i = 0;i < n;i++) {
        cin >> inp[i];
        maxt = max(maxt, max(inp[i], l - inp[i]));
        mint = max(mint, min(inp[i], l - inp[i]));
    }
    cout << mint << " " << maxt << endl;
}
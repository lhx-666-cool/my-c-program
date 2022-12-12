#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char inp[100][100];
    for (int i = 0;i < n;i++) {
        scanf("%s", inp[i]);
    }
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (strcmp(inp[i], inp[j]) > 0) {
                swap(inp[i], inp[j]);
            }
        }
    }
    for (int i = 0;i < n;i++) {
        puts(inp[i]);
    }
}
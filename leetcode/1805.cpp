#include<bits/stdc++.h>
using namespace std;
int x[10000000];
int main() {
    string word = "4";
    int num = 0;
    int count = 0;
    word[word.length()] = 'a';
    word[word.length() + 1] = 0;
    for (int i = 0;word[i] != 0;i++) {
        if (isdigit(word[i])) {
            num = num * 10 + word[i] - 48;
            continue;
        }
        if (isalpha(word[i])) {
            if (x[num] == 0) {
                x[num] = 1;
                count++;
            }
            num = 0;
        }
    }
    return count;
}
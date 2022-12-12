#include <cstdio>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char s1[100] = { 0 };
    char s2[100] = { 0 };
    gets(s1);
    gets(s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int evemax = 0, maxx = 0;
    for (int i = 0;i < max(len1, len2); i++) {
        if (islower(s1[i])) {
            s1[i] = toupper(s1[i]);
        }
        if (islower(s2[i])) {
            s2[i] = towupper(s2[i]);
        }
    }
    for (int i = 0;i < len1;i++) {
        for (int j = 0;j < len2;j++) {
            evemax = 0;
            for (int k = 0;s1[i + k] != 0 && s2[j + k] != 0;k++) {
                if (s1[i + k] == s2[j + k]) {
                    evemax++;
                } else {
                    evemax = 0;
                }
                if (evemax >= maxx) {
                    maxx = evemax;
                }
            }
        }
    }
    printf("%.3f", maxx * 2.0 / (len1 + len2) * 1.0);
}

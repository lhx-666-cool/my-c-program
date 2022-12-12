#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
int main() {
    char text[100] = { 0 };
    scanf("%s", text);
    int isming = 0;
    int n;
    scanf("%d %d", &isming, &n);
    char inp[100][100];
    int res[100] = { 0 };
    gets(inp[0]);
    for (int i = 0;i < n; i++) {
        gets(inp[i]);
    }
    if (isming == 0) {
        char* texti = strupr(text);
        for (int i = 0;i < n;i++) {
            char* ling;
            ling = strupr(inp[i]);
            if (strstr(ling, texti) != NULL) {
                res[i] = 1;
            }
        }
    } else {
        for (int i = 0;i < n;i++) {
            if (strstr(inp[i], text) != NULL) {
                res[i] = 1;
            }
        }
    }
    for (int i = 0;i < n;i++) {
        if (res[i] == 1) {
            puts(inp[i]);
        }
    }
}

#include<string>
#include<algorithm>
using namespace std;
bool cmp(int x, int y) {
    if (x < y && x != 0 && y != 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    string s = "aabcbaa";
    int b[123] = { 0 };
    int res = 0;
    int len = s.length();
    for (int i = 0;i < len;i++) {
        for (int k = 1; k < len - i;k++) {
            for (int j = 0;j <= k;j++) {
                b[(int)s[i + j]]++;
            }
            int max = 0, min = 99999;
            for (int i = 97;i < 123;i++) {
                if (b[i] > max) {
                    max = b[i];
                }
                if (b[i] < min && b[i] != 0) {
                    min = b[i];
                }
                b[i] = 0;
            }
            res += max - min;
        }
    }
    printf("%d", res);

}
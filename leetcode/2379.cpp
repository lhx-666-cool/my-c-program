#include <string>
using namespace std;
int main() {
    string blocks = "WBWBBBW";
    int k = 2;

    int len = blocks.length();
    int res = 0x3f3f3f;
    int w = 0;
    for (int i = 0, j = 0; j < len; j++) {
        if (blocks[j] == 'W') {
            w++;
        }
        if (j - i + 1 >= k) {
            res = min(res, w);
            if (blocks[i] == 'W') {
                w--;
            }
            i++;
        }
    }
    return res;
}
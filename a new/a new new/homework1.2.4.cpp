#include<iostream>
bool yunhan(bool x, bool y) {
    if (x == true && y == false) {
        return false;
    } else {
        return true;
    }
}
using namespace std;
int main() {
    bool p = true, q = 0, r = false, s = false;
    if (p || (!p && q)) {
        printf("t");
    } else {
        printf("f");
    }
}
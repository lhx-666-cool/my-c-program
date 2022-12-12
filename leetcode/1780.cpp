#include<cstdio>
int main() {
    int n = 21;
    /*---------------*/
    int pow3 = 14348907;
    for (int i = 15;i >= 0;i--) {
        if (n >= pow3) {
            n = n - pow3;
        }
        pow3 = pow3 / 3;
    }
    if (n == 0) {
        printf("true");
    } else {
        printf("false");
    }
}
#include<iostream>
using namespace std;
int main() {
    int set[20] = { 0 };
    bool eset[101] = { 0 };
    int n;
    cin >> n;
    while (n--) {
        int x, flag = 0;
        cin >> x;
        for (int i = 0;i < 20;i++) {
            if ((5 - set[i]) >= x) {
                for (int j = i * 5 + 1 + set[i], k = 0;k < x;j++, k++) {
                    cout << j << " ";
                    eset[j] = true;
                }
                puts("");
                set[i] += x;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            for (int i = 1, j = 0;j < x && i <= 100;i++) {
                if (eset[i] == false) {
                    cout << i << " ";
                    eset[i] = true;
                    j++;
                }
            }
            puts(" ");
        }
    }
}
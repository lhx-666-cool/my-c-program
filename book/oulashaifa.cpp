#include <iostream>
#include <cstring>
#include <cmath>
#include<cstdlib>
using namespace std;

const long long int MAX_N = 1e9;

int n;
bool prime[MAX_N + 1]; // prime[i] 表示 i 是否为质数

int main() {
    cin >> n;
    memset(prime, true, sizeof(prime));
    FILE* fp;
    fp = fopen("b.txt", "w");
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = i * 2; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            // printf("%d", i);
            char res[10] = { 0 };
            itoa(i, res, 10);
            fputs(res, fp);
            fputs("\n", fp);
        }
    }
    cout << "0" << endl;
    fclose(fp);
    return 0;
}
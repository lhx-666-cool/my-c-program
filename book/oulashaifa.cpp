#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const long long int MAX_N = 1e11;

int n;
bool prime[MAX_N + 1]; // prime[i] 表示 i 是否为质数

int main() {
    cin >> n;
    memset(prime, true, sizeof(prime));

    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = i * 2; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
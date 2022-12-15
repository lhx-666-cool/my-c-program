#include<cstdio>
#include<cstdlib>
using namespace std;
const int N = 100;
bool prime[N + 1] = { 0 };
int main() {
    int n = N;
    int p = 2;
    FILE* fp;
    fp = fopen("b.txt", "w");
    while (p * p <= n) {
        if (prime[p] == false) {
            for (int i = p * p;i < n + 1;i += p) {
                prime[i] = true;
            }
            p++;
        }
    }
    for (int p = 2;p <= n;p++) {
        if (prime[p] == false) {
            // printf("%d ", p);
            // char res[10];
            // itoa(p, res, 10);
            // fputs(res, fp);
            // fputs("\n", fp);
        }
    }
    fclose(fp);
    system("Pause");
}
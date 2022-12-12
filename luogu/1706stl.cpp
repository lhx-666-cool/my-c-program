#include<cstdio>
#include<algorithm>
using namespace std;
int a[9] = { 1,2,3,4,5,6,7,8,9 };
int main() {
    int n;
    scanf("%d", &n);
    do {
        for (int i = 0;i < n;i++) {
            printf("    %d", a[i]);
        }
        printf("\n");
    } while (next_permutation(a, a + n));
}
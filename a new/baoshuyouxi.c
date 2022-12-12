#include<stdio.h>

int main() {
    int n = 0;
    int s1 = 0, s2 = 0, s3 = 0, ii = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            if (i % 3 == 1) {
                s1++;
                n++;
            }
            if (i % 3 == 2) {
                s2++;
                n++;
            }
            if (i % 3 == 0) {
                s3++;
                n++;
            }
        } else {
            ii = i;
            while (ii > 0) {
                if (ii % 10 == 7) {
                    if (i % 3 == 1) {
                        s1++;
                        n++;
                    }
                    if (i % 3 == 2) {
                        s2++;
                        n++;
                    }
                    if (i % 3 == 0) {
                        s3++;
                        n++;
                    }
                }
                ii /= 10;
                if (ii == 0) {
                    continue;
                }
            }
        }
    }
    printf("%d %d %d", s1, s2, s3);
}
#include<stdio.h>
#include <stdlib.h>

int main() {
    char num[99][99];
    int n = 0, sum[99], i = 0, ii = 0;
    int max = 0, maxnum = 0;
    int newnumindex[99];
    int indexn = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", &num[i]);
    }
    for (i = 0; i < n; i++) {
        for (ii = 0; num[i][ii] != 0; ii++) {
            sum[i] = sum[i] + num[i][ii] - 48;
        }
        if (max <= sum[i]) {
            max = sum[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (sum[i] == max) {
            newnumindex[indexn] = i;
            indexn++;
        }
    }
    if (indexn == 1) {
        printf("%s", num[newnumindex[indexn - 1]]);
    }
    else {
        for (ii = 0; ii < indexn; ii++) {
            if (maxnum < atoi(num[newnumindex[ii]])) {
                maxnum = atoi(num[newnumindex[ii]]);
            }
        }
        printf("%d", maxnum);
    }
}
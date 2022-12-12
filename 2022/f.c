#include "stdio.h"
#include "stdlib.h"
int main() {
    int n, v, q, max = 0;
    scanf("%d %d %d", &n, &v, &q);
    int qs[20][2] = { 0 };
    int val[1100][4] = { {0} };
    int no[1100] = { 0 };
    double xinjiabi[1100] = { 0 };
    for (int i = 0;i < q;i++) {
        scanf("%d %d", &qs[i][0], &qs[i][1]);
        qs[i][0]--;
        qs[i][1]--;
        no[qs[i][0]] = 1;
        no[qs[i][1]] = 1;
    }
    for (int i = 0;i < n;i++) {
        scanf("%d %d", &val[i][0], &val[i][1]);
        val[i][2] = i;
        xinjiabi[i] = val[i][1] / val[i][0];
    }
    // for (int i = 0;i < q;i++) {
    //     if (val[qs[i][0]][1] > val[qs[i][1]][1]) {
    //         val[qs[i][1]][0] = 0;
    //         val[qs[i][1]][1] = 0;
    //     } else {
    //         val[qs[i][0]][0] = 0;
    //         val[qs[i][0]][1] = 0;
    //     }
    // }
    // for (int i = 0;i < q;i++) {
    //     if (xinjiabi[qs[i][0]] > xinjiabi[qs[i][1]]) {
    //         val[qs[i][1]][0] = 0;
    //         val[qs[i][1]][1] = 0;
    //         xinjiabi[qs[i][1]] = 0;
    //     } else {
    //         val[qs[i][0]][0] = 0;
    //         val[qs[i][0]][1] = 0;
    //         xinjiabi[qs[i][0]] = 0;
    //     }
    // }
    int temp1, temp2, temp3, temp4;;
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            // if ((val[i][1] < val[j][1]) || (val[i][1] == val[j][1] && val[i][0] > val[j][0])) {
            if (xinjiabi[i] < xinjiabi[j]) {
                temp1 = val[i][0];
                temp2 = val[i][1];
                temp3 = val[i][2];
                temp4 = xinjiabi[i];
                val[i][0] = val[j][0];
                val[i][1] = val[j][1];
                val[i][2] = val[j][2];
                xinjiabi[i] = xinjiabi[j];
                val[j][0] = temp1;
                val[j][1] = temp2;
                val[j][2] = temp3;
                xinjiabi[j] = temp4;
            }
        }
    }

    for (int i = 0;i < n;i++) {
        int no1 = 0, no2 = 0;
        if (no[val[i][2]] == 1) {
            for (int j = 0;j < q;j++) {
                if (qs[j][0] == val[i][2] || qs[j][1] == val[i][2]) {
                    no2 = qs[j][1];
                    no1 = qs[j][0];
                }
            }
        }
        int maxi = val[i][1];
        int vi = val[i][0];
        for (int j = i + 1;j <= n;j++) {
            if (val[j][2] == no2 || val[j][2] == no1) {
                continue;
            }
            if (vi + val[j][0] > v) {
                continue;
            }
            maxi += val[j][1];
            vi += val[j][0];

        }
        if (maxi > max) {
            max = maxi;
        }
    }
    printf("%d", max);
}



// for (int i = 0;i < n;i++) {
//         int no1 = 0, no2 = 0;
//         if (no[i] == 1) {
//             for (int j = 0;j < q;j++) {
//                 if (qs[i][0] == i || qs[i][1] == i) {
//                     no2 = qs[i][1];
//                     no1 = qs[i][0];
//                 }
//             }
//         }
//         int maxi = val[i][1];
//         int vi = val[i][0];
//         for (int j = i + 1;j <= n;j++) {
//             if (j == no2 || j == no1) {
//                 continue;
//             }
//             if (vi + val[j][0] > v) {
//                 continue;
//             }
//             maxi += val[j][1];
//             vi += val[j][0];

//         }
//         if (maxi > max) {
//             max = maxi;
//         }
//     }
//     printf("%d", max);

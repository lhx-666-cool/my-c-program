// #include<cstdio>
// int v[30] = { 0 };
// int vv = 0;
// int g;
// int siliao[20][30] = { 0 };
// int my[15] = { 0 };
// bool avail(int x, int ci) {
//     for (int i = 0;i < ci;i++) {
//         if (my[i] == x) {
//             return false;
//         }
//     }
//     return true;
// }
// int nowv[30] = { 0 };
// bool gou() {
//     for (int i = 0;i < vv;i++) {
//         if (nowv[i] < v[i])
//             return false;
//     }
//     return true;
// }
// int minci = 9999;
// int res[30] = { 0 };
// bool gou(int ci) {
//     int nowv[30] = { 0 };
//     for (int i = 0;i < vv;i++) {
//         nowv[i] = 0;
//         for (int j = 0;j <= ci;j++) {
//             nowv[i] += siliao[my[j]][i];
//         }
//         if (nowv[i] < v[i]) {
//             return false;
//         }
//     }
//     return true;
// }
// int minci = 99999;
// void dfs(int ci) {
//     if (ci < g) {
//         for (int i = 0;i < g;i++) {
//             if (avail(i, ci)) {
//                 my[ci] = i;
//                 if (gou(ci)) {
//                     if (ci < minci) {
//                         minci = ci;
//                     }
//                     return;
//                 }
//                 dfs(ci + 1);
//             }
//         }
//     }
// }
// void dfs(int ci) {
//     if (ci < g) {
//         for (int i = 0;i < g;i++) {
//             if (avail(i, ci)) {
//                 my[ci] = i;
//                 if (gou(ci)) {
//                     if (ci < minci) {
//                         minci = ci;
//                         for (int j = 0;j <= ci;j++) {
//                             res[j] = my[j];
//                         }
//                     }
//                 } else {
//                     dfs(ci + 1);
//                 }
//             }
//         }
//     }
// }
// void dfs(int ci) {
//     if (ci < g) {       
//     }
// }
// int main() {
//     scanf("%d", &vv);
//     for (int i = 0;i < vv;i++) {
//         scanf("%d", &v[i]);
//     }
//     scanf("%d", &g);
//     for (int i = 0;i < g;i++) {
//         for (int j = 0;j < vv; j++) {
//             scanf("%d", &siliao[i][j]);
//         }
//     }
//     dfs(0);
//     printf("%d ", minci + 1);
//     for (int i = 0;i <= minci;i++) {
//         printf("%d ", res[i] + 1);
//     }
// }

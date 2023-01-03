// #include<iostream>
// const int N = 10000010;
// int son[N][26], cnt[N], idx;
// char str[110];
// void insert(char* str) {
//     int p = 0;
//     for (int i = 0;str[i] != 0;i++) {
//         int u = str[i] - 'a';
//         if (son[p][u] == 0) {
//             son[p][u] = ++idx;
//         }
//             p = son[p][u];
//     }
//     cnt[p]++;
// }
// void query(char* str) {
//     int p = 0;
//     for (int i = 0;str[i] != 0;i++) {
//         int u = str[i] - 'a';
//         if (son[p][u] == 0) {
//             return;
//         }
//         p = son[p][u];
//     }

// }
// // void print(int p) {

// // }
// int main() {
//     int n;
//     scanf("%d", &n);
//     while (n--) {
//         scanf("%s", str);
//         insert(str);
//     }
//     scanf("%s", str);

// }
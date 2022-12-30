// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     int h[1100] = { 0 };
//     int n;
//     cin >> n;
//     int c = 0;
//     for (int i = 0;i < n;i++) {
//         int x;
//         cin >> x;
//         if (h[x] == 0) {
//             c++;
//         }
//         h[x] ++;
//     }
//     for (int i = 0;i < c;i++) {
//         int* m = max_element(h, h + 1100);
//         printf("%d %d\n", m - h, *m);
//         *m = 0;
//     }
// }
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
const int N = 20;
int g[N];
stack<int> s;
int main() {
    int** a = (int**)calloc(1000, sizeof(int*));
    for (int i = 0; i < 100; i++) {
        a[i] = (int*)calloc(1000, sizeof(int));
    }
    for (int i = 0; i < 1000; i++) {
        free(a[i]);
    }
    free(a);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    int j = 1, head = 0;
    s.push(j);
    int c = n;
    while (c--) {
        while (!s.empty() && s.top() == g[head] && head < n) {
            head++;
            s.pop();
        }
        if (++j <= n) {
            s.push(j);
        }
    }
    if (s.empty()) {
        printf("yes");
    } else {
        printf("no");
    }
}
// #include<iostream>
// #include<stack>
// using namespace std;
// const int N = 20;
// int g[N], a[N];
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         stack<int> s;
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> g[i];
//         }
//         int j = 0, head = 0;
//         s.push(a[j]);
//         int c = n;
//         while (c--) {
//             while (!s.empty() && s.top() == g[head] && head < n) {
//                 head++;
//                 s.pop();
//             }
//             if (++j <= n) {
//                 s.push(a[j]);
//             }
//         }
//         if (s.empty()) {
//             printf("yes");
//         } else {
//             printf("no");
//         }
//     }
// }
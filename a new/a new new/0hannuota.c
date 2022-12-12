#include <stdio.h>

double NumHanoi(int index);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.15g\n", NumHanoi(n));
    return 0;
}
double NumHanoi(int index) {
    if (index == 1) {
        return 1;
    } else {
        return 2 * NumHanoi(index - 1) + 1;
    }
}
// double NumHanoi(int index) {
//     static double re = 1;
//     static int nowindex = 0;
//     nowindex++;
//     if (index == 1) {
//         re = re * 2;
//         return re;
//     } else {
//         re = 2 * NumHanoi(index - 1);
//         if (index != nowindex) {
//             return re;
//         } else {
//             return re - 1;
//         }
//     }
// }
// double mypow(int index) {
//     if (index == 1) {
//         return 2;
//     } else {
//         return 2 * mypow(index - 1);
//     }
// }
// double NumHanoi(int index) {
//     if (index == 1) {
//         return 1;
//     } else {
//         return mypow(index) + NumHanoi(index - 1);
//     }
// }

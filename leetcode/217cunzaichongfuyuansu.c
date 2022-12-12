#include "stdio.h"
#include "stdlib.h"
// int funcmp(const int* x, const int* y) {
//     return (*x - *y);
// }
int cmpfun(const void* x, const void* y) {
    int a = *(int*)x, b = *(int*)y;
    return a - b;
}
int main() {
    int nums[999] = { 1,2,3,1 };
    int numsSize = 4;
    // /*------------------------*/
    // qsort(nums, numsSize, sizeof(int), funcmp);
    qsort(nums, numsSize, sizeof(int), cmpfun);
    for (int i = 0;i < numsSize - 1;i++) {
        if (nums[i] == nums[i + 1]) {
            return 1;
        }
    }
    return 0;
}
// #include "stdio.h"
// #include "stdlib.h"
// int cmpfun(int* x, int* y) {
//     return (*x - *y);
// }
// int main() {
//     int nums[99] = { 2,3,1,0,2,5,3 };
//     int numsSize = 7;
//     /*----------------------*/
//     qsort(nums, numsSize, sizeof(int), cmpfun);
//     for (int i = 0;i < numsSize - 1;i++) {
//         if (nums[i] == nums[i + 1]) {
//             return nums[i];
//         }
//     }

// }
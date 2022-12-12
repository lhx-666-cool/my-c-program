#include "stdio.h"
int main() {
    int nums[999] = { 1,3,5,6 };
    int target = 2;
    int numsSize = 4;
    /*------------------------------*/
    for (int i = 0;i < numsSize;i++) {
        if (nums[i] >= target) {
            return i;
        }
    }
    return numsSize;
}
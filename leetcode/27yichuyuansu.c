#include "stdio.h"
int main() {
    int nums[4] = { 3,2,2,3 };
    int numsSize = 4;
    int val = 3;
    /*----------------------*/
    int head = -1;
    for (int i = 0;i < numsSize;i++) {
        if (nums[i] != val) {
            nums[++head] = nums[i];
        }
    }
    return ++head;
}
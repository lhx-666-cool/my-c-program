#include "stdio.h"
int main() {
    int nums[10] = { 0,0,1,1,1,2,2,3,3,4 };
    int numSize = 10;
    /*---------*/
    int head = 0, preval = 0;
    preval = nums[0];
    for (int i = 1;i < numSize;i++) {
        if (nums[i] != preval) {
            nums[++head] = nums[i];
        }
        preval = nums[i];
    }
    return head++;
}
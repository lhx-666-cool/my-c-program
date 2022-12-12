#include "stdio.h"

int main() {
    int nums[999];
    int target, i = 0,ii,iii=0,lin1,lin2;
    char ch;
    for (; 1 == 1; i++) {
        scanf("%d", & nums[i]);
        scanf("%c", & ch);
        if (ch == ']') {
            break;
        }
    }
    scanf("%d",&target);
    ii=i;
    i=0;
    for(;i<=ii;i++){
        lin1=nums[i];
        for(iii=i+1;iii<=ii;iii++){
            lin2=nums[iii];
            if(lin1+lin2==target){
                printf("[%d,%d]",i+1,iii+1);
                break;
            }
        }
    }
}
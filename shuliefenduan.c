#include<stdio.h>
int main(){
    int shulie[999];
    int n;
    int i=0;
    int m=0;
    int fenduan=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&shulie[i]);
    }
    for(i=0;i<n-1;i++){
        if(shulie[i]!=shulie[i+1]){
            fenduan++;
        }else{
        }
    }
    printf("%d",fenduan+1);
}
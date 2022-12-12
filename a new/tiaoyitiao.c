#include<stdio.h>
int main(){
    int shuru[99]={1};
    int i,ii;
    int okscore=2;
    int score=0;
    for(i=0;1;i++){
        scanf("%d",&shuru[i]);
        if(shuru[i]==0){
            break;
        }
    }
    for(ii=0;ii<=i;ii++){
        if(shuru[ii]==1){
            score=score+1;
            okscore=2;
        }
        if(shuru[ii]==2){
            score=score+okscore;
            okscore+=2;
        }
        if(shuru[ii]==0){
            printf("%d",score);
        }
    }
}
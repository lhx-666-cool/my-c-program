#include<stdio.h>
#include "math.h"
int main(){
    int n;
    int shuru[9999];
    int i=0,ii=0;
    int min=99999;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&shuru[i]);
    }
    for(i=0;i<n;i++){
        for(ii=0;ii<n;ii++){
            if(i==ii){
                continue;
            }
            if(abs(shuru[i]-shuru[ii])<min){
                min=abs(shuru[i]-shuru[ii]);
            }
        }
    }
    printf("%d",min);

}
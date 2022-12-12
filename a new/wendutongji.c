#include "stdio.h"
int main(){
    int n;
    scanf("%d",&n);
    float tem[99];
    float max=-1,min=99999,sum=0;
    for (int i = 0; i < n; i++) {
        scanf("%f",&tem[i]);
    }
    for(int i=0;i<n;i++){
        tem[i]=tem[i]*9/5+32;
        if(max<=tem[i]){
            max=tem[i];
        }
        if(min>=tem[i]){
            min=tem[i];
        }
        sum+=tem[i];
    }
    for(int i=0;i<n;i++){
        if(i%5==0&&i!=0){
            printf("\n");
        }
        printf("%.1f ",tem[i]);
    }
    printf("\n%.1f %.1f %.1f",min,max,sum/n);
}
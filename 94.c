#include<stdio.h>
int main(){
    int a[4]={0};
    int i,t,turn;
    for(i=0;i<=3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++){
        for(t=i+1;t<4;t++){
            if(a[t]<a[i]){
                turn=a[i];
                a[i]=a[t];
                a[t]=turn;
            }
        }
    }
    printf("%d",a[0]);
    for(i=1;i<=3;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    float n;
    int i;
    int c=0;
    scanf("%f",&n);
    for(i=0;i<=10000;i++){
        if(i*i==n){
            printf("%d",i);
            c++;
        }
    }
    if(c==0){
        printf("no");
    }else
    {
    }
    
}
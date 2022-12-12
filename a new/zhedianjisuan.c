#include<stdio.h>
int main(){
    int day;
    int n;
    int eve[200];
    scanf("%d",&day);
    for(n=0;n<day;n++){
        scanf("%d",&eve[n]);
    }
    eve[n]=eve[n-1];
    int c=0;
    for(n=1;n<day;n++){
        if(eve[n]<eve[n-1]&&eve[n]<eve[n+1]){
            c++;
        }
        if(eve[n]>eve[n-1]&&eve[n]>eve[n+1]){
            c++;
        }
    }
    printf("%d",c);
}
#include <stdio.h>
int main(){
    int sum,i=0;
    char x[10]="0000000000";
    scanf("%s",&x);
    for(i=0;i<=9;i++){
        sum=sum+x[i]-48;
    }
    printf("%d",sum+48);
}
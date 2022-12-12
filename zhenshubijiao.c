#include <stdio.h>
int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("%d %d",a%10,b*b);
    }
    if(a<b){
        printf("%d %d",b%10,a*a);
    }
    if (a==b){
        printf("%d %d",b%10,a*a);
    }
}
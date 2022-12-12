#include "stdio.h"
int main(){
    int a ,b ,c,max=-99999;
    scanf("%d %d %d",&a,&b,&c);
        if(a>max){
            max=a;
        }
        if(b>max){
            max=b;
        }
        if(c>max){
            max=c;
        }
        printf("%d",max);
    
}
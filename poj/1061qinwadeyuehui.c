#include<stdio.h>
#include<math.h>
int main(){
    long x,y,m,n,l;
    scanf("%d %d %d %d %d",&x,&y,&m,&n,&l);
    long i=0;
    if(m==n){
        printf("Impossible");
    }else{
    for(i=0;1;i++){
        x+=m;
        y+=n;
        if(abs(x-y)%l==0){
            printf("%d",i+1);
            break;
        }
        if(i>=1000000){
            printf("Impossible");
            break;
        }
    }
   
    }
    }
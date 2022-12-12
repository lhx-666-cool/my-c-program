#include<stdio.h>
#include<math.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x>=0){
        printf("%.2f",sqrt(x));
    }else{
        printf("%.2f",(x+1)*(x+1)+2*x+1/x);
    }
}
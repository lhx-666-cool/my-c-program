#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r1,r2,r3,r4;
    scanf("%f %f",&x,&y);
    r1=sqrt((x-2)*(x-2)+(y-2)*(y-2));
    r2=sqrt((x+2)*(x+2)+(y-2)*(y-2));
    r3=sqrt((x+2)*(x+2)+(y+2)*(y+2));
    r4=sqrt((x-2)*(x-2)+(y+2)*(y+2));
    if(r1<=1||r2<=1||r3<=1||r4<=1){
        printf("10");
    }
    else{
        printf("0");
    }
    return 0;
}
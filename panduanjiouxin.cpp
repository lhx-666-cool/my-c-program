#include<stdio.h>
#include<math.h>
int main(){
    double a=0;
    scanf("%lf",&a);
    if(a-ceil(a)!=0||a<=0){

    }else{
    if((int)a%2==0){
        printf("Å¼Êý");
    }else{
        printf("ÆæÊý");
    }
    }
    return 0;
}
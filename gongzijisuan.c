#include<stdio.h>
int main(){
    int s= 0,a,gongzi;
    scanf("%d",&s);
    a = s-3500;
    if(a<=0){
        gongzi = s;
    }else if(a<=1500){
        gongzi = 3500+a*0.97;
    }else if (a>1500&&a<=4500)
    {
        gongzi = 3500 + 1500*0.97+(a-1500)*0.9;
    }else if (a>4500&&a<=9000)
    {
        gongzi = 3500 + 1500*0.97+3000*0.9+(a-4500)*0.8;
    }else if (a>9000&&a<=35000)
    {
        gongzi = 3500 + 1500*0.97+3000*0.9+4500*0.8+(a-9000)*0.75;
    }else if (a>35000)
    {
        gongzi = 3500+1500*0.97+3000*0.9+4500*0.8+26000*0.75+(a-35000)*0.7;
    }
    
printf("%d",gongzi);

}
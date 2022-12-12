#include <stdio.h>
#include<stdio.h>
int main(){
    char sex,sports,diet;
    float fh,mh,h0,h;
    scanf("%c %f %f %c %c",&sex,&fh,&mh,&sports,&diet);
    if(sex=='M'){
        h0=(fh+mh)*0.54;
    }
    if(sex=='F'){
        h0=(fh*0.923+mh)/2;
    }
    if(sports=='Y'&&diet=='N'){
        h=h0*1.02;
    }
    if(diet=='Y'&&sports=='N'){
        h=h0*1.015;
    }
    if(sports=='Y'&&diet=='Y'){
        h=h0*1.035;
    }
    if(sports=='N'&&diet=='N'){
        h=h0;
    }
    printf("%.1fcm",h);
    return 0;
}
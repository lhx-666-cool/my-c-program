#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,v,p;
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2; 
    v=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f", v);
}
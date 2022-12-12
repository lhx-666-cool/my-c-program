#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float area,s;
    printf("area=sqrt(s*(s-a)*(s-b)*(s-c))");
    aa:scanf("%d %d %d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b&&a>0&&b>0&&c>0){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.0f",area);
    }else{
        printf("出错\n");
        goto aa;
    }
    }
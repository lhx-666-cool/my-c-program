#include <stdio.h>
int main (){
    float a,b,c,n1,n2;
    scanf("%f,%f,%f",&a,&b,&c);
    n1 = a*b+c;
    n2 = a* (b+c);
    printf("%.0f,%.0f",n1,n2);
}
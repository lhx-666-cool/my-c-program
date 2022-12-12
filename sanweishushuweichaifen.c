#include <stdio.h>
int main (){
    int x,a,b,c;
    scanf("%d",&x);
    a = x % 10;
    b = ((x-a)/10)%10;
    c = ((x-b)/100)%10;
    // d = ((x-c)/1000)%10;
    // e = ((x-d)/10000)%10;
    printf("%d %d %d",c,b,a);
}
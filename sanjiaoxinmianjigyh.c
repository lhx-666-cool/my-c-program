#include <stdio.h>
#include <math.h>
int main()
{float a,b,c,d,e;
scanf("%f %f %f",&a,&b,&c);
d=(a+b+c)/2;
e=sqrt(d*(d-a)*(d-b)*(d-c));
printf("%.2f",e);
return 0;
}

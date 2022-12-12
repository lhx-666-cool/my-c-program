#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	c=(4*3.1415926*a*a*a*7.86)/(3*20*20*20);
	d=(4*3.1415926*b*b*b*19.3)/(3*20*20*20);
	printf("%.3f %.3f",c,d);
	return 0;
	
}

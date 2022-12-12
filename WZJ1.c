#include "stdio.h"
#include "math.h"
int max(int x, int y)
{
	if (x>y)
	{
	    return x;
	}
	else
		return y;
}
int min(int x, int y)
{
	if (x<y)
	{
	    return x;
	}
	else
		return y;
}
int main()
{
	int a,b,c,d,e,A,B,C,D,E;
    printf("输入一个5位整数");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	A=max(a,b);B=min(a,b);//13549--31549
	A=max(a,c);C=min(a,c);//51349
    A=max(a,d);D=min(a,d);//51349
	A=max(a,e);E=min(a,e);//91345
    B=max(b,c);C=min(b,c);//93145
    B=max(b,d);D=min(b,d);//94135
	B=max(b,e);E=min(b,e);//95413
	C=max(c,d);D=min(c,d);//95413
	C=max(c,e);E=min(c,e);//95413
	D=max(d,e);E=min(d,e);//95431
	printf("%d,%d,%d,%d,%d",A,B,C,D,E);
	getchar();
    getchar();
    getchar();
    getchar();
	getchar();
	return 0;

}
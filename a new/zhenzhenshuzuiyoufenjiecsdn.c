
#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 1)
	{
		printf("-1");
		return 0;
	}
	double mask = n * 1.0;
	for (int i = 19;i > 0;i--)
	{
		if (pow(2, i) > mask)
			continue;
		else if (mask > 0)
		{
			mask -= pow(2, i);
			printf("%.0f ", pow(2, i));
		}
		else
			break;
	}
}

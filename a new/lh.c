#include<stdio.h>
int main(void)
{
	int v[10][10], i, j;
	for (i = 0;i < 10;i += 1)
	{
		v[i][0] = 1;
		v[i][i] = 1;
	}
	for (i = 2;i < 10;i += 1)
	{
		for (j = 2;j < i;j += 1)
		{
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
		}
	}
	for (i = 0;i < 10;i += 1)
	{
		for (i = 0;j < i;j++)
			printf(" %d ", v[i][j]);

		printf("\n");

	}
	return 0;
}

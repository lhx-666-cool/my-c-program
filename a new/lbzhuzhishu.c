#include<stdio.h>
int f1(int a, int b)
{
	int c;
	while (a % b)
	{
		c = a % b;
		while (c) {
			a = b;
			b = c;
			c = a % b;
		}

	}
	//printf("%d", b);
	return b;
}
int main()
{
	/**/int T;
	int sum = 0;
	scanf("%d", &T);
	while (T)
	{
		int k;
		scanf("%d", &k);
		int i = 0;
		for (i = 0; i < k; i++)
		{
			int m, n;
			scanf("%d%d", &m, &n);
			if (f1(m, n) == 1) {
				sum = sum + 1;
			}

		}
		T--;
	}
	printf("%d", sum);
	return 0;
}
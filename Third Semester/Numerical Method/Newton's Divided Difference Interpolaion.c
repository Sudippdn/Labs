//Newton's Divided Difference Interpolation
#include <stdio.h>
#define F(j, i) ((dd[j]-dd[j-1])/(x[i]-x[j-1-i]))

int main()
{
	int n, i, j;
	float dd[10], v = 0, p = 1, fx[10], x[10];

	printf("Enter the number of data in a table: ");
	scanf("%d", &n);
	printf("Enter the value at which interpolation is to be calculated: ");
	scanf("%f", &x[0]);

	for (i = 0; i < n; i++)
	{
		printf("Enter the values of x and fx at i = %d: ", i);
		scanf("%f %f", &x[i], &fx[i]);
		dd[i] = fx[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= i + 1; j--)
		{
			dd[j] = F(j, i);
		}
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			p = p * (x[0] - x[j]);
		}
		v = v + dd[i] * p;
		p = 1;
	}

	printf("The interpolation of %f is %f", x, v);
	return 0;
}


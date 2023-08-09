
#include <stdio.h>
int main()
{
	int n,i,j,k;
	float x[10],dd[10], fx[10],term, factor, vod,xv;
	printf("Read the n number of data: ");
	scanf("%d",&n);
	printf("Enter at which a derivative is needed: ");
	scanf("%f",&xv);
	for (i = 0; i < n; i++)
	{
		printf("Enter the values of x and fx at i = %d: ", i);
		scanf("%f %f", &x[i], &fx[i]);
	}
	for (i=0; i<n;i++)
	{
		dd[i]=fx[i];
	}
	for (i=0; i<n;i++)
	{
		for (j=n-1; j>i; j--)
		{
			dd[j] = (dd[j]-dd[j-1])/(x[j]-x[j-1-i]);
		}
	}
	vod = dd[1];
	for (i =2; i<n-1; i++)
	{
		term = 0;
		for (j = 0; j<i; j++)
		{
			factor = 1;
			for (k = 0; k<i; k++)
			{
				if (j!= k)
				{
					factor = factor*(xv-x[k]);
				}	
			}
			term += factor;
		}
		 vod += dd[i]*term;
	}
	printf("The value of derivative, which is the derivative of vod is %f", vod);
	return 0;
}


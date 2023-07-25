//lagrange Interpolation
#include <stdio.h>
#include <conio.h>
//float x0,x1,x2;
int main()
{
	int i, j, n;
	float x,L[10],v=0, ax[10],fx[10],l;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the number to read: ");
	scanf("%f",&x);
	for (i=0; i<n; i++)
	{
		printf("Enter the value of x and fx at i = %d \n", i);
		scanf("%f%f",&ax[i],&fx[i]);
	}
	for (i=0; i<n; i++)
	{
		l = 1.0;
		for (j=0; j<n; j++)
		{
			if (j!= i)
			{
				l=l*((x-ax[j])/(ax[i]-ax[j]));
			}
		}
		L[i]= l;
	}
	for (i=1; i<n;i++)
	{		
		v=v+fx[i]*L[i];
	}
	printf("The interpolation value at %f is %f", x, v);
	getch();
	return 0;
	
	
}

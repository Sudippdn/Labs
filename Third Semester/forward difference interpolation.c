// lagrange Interpolation
#include <stdio.h>
#include <conio.h>
//float x0,x1,x2
int facto(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return(n*facto(n-1));
}
int main()
{
	int i, j, k, n;
	float x,v=0,fd[10], ax[10],fx[10], p,h,s;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the number to read: ");
	scanf("%f",&x);
	for (i=0; i<n; i++)
	{
		printf("Enter the value of x and fx at i = %d \n", i);
		scanf("%f%f",&ax[i],&fx[i]);
	}
    h = ax[1] - ax[0];
    s = (x-ax[0])/h;
	for (i = 0; i< n-1; i++)
	{
		fd[i] = fx[i];
	}
	for (i=0; i<n-1; i++)
	{		
	for (j=n-1; j>i+1; j--)
		{
			fd[j] = fd[j]-fd[j-1];
		}
	}
    v= fd[0];
    p = 1;
	for (i = 1; i < n -1; i++)
	{
		for (k = 1; k < i; k++)
		{
			p = p * (s - k + 1);
		}
		v = v + (fd[i] * p)/facto(n);
		p = 1;
	}
printf("The interpolation value of %f is %f", x, v);
getch();
return 0;	
}


//WAP to find derivative of f(x) = sinx + 1. Take x in degreeb using forward difference formula
#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define f(x) (a*x*x+b*x+c)


int main()
{
	int x,i;
	float h, fdx,fx,a,b,c;
	printf("Enter the value at which the derivative is needed: ");
	scanf("%d",&x);
	printf("Enter the coeffients: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("Enter the interval gap: ");
	scanf("%f",&h);
	fx= f(x);
	fdx = (fx-f(x-h))/h;
	printf("The value after derivative is %f", fdx);
	return 0;
}
/*
a = b = 1
c =0
h = 0.1
d = ~3

*/

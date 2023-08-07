//WAP to find derivative of f(x) = sinx + 1. Take x in degreeb using forward difference formula
#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define f(x) (sin(x) +1)

int main()
{
	int x,i;
	float h, fdx,fx;
	printf("Enter the value at which the derivative is needed: ");
	scanf("%d",&x);
	printf("Enter the interval gap: ");
	scanf("%f",&h);
	x = (pi/180)*x;
	fx= f(x);
	fdx = (f(x+h)-fx)/h;
	printf("The value after derivative is %f", fdx);
	return 0;
}
//inputs
/*
x = 60
h = 0.1

*/

#include <stdio.h>
int main()
{
	int *x,y;
	y=10;
	x=&y;
	printf("The address of x is %d\n",x);
	printf("The address of y is %d\n",&y);
	printf("The value pointed by x is %d\n",*x);
	
}

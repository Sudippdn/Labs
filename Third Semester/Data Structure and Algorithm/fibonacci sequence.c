// fibonacci number
#include <stdio.h>
#include <conio.h>
int fib(int n)
{
	if (n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-1) + fib(n-2);
	}
}
int main()
{
	int i,n, fibonacci;
	printf("Enter the number of items: ");
	scanf("%d",&n);
	printf("Fibonacci sequence of %d is: ",n);
	for (i=0; i<n; i++)
		printf("%d ",fib(i));
		printf(" ");
return 0;
}

#include <stdio.h>
#include <conio.h>
void toh(int n, char source,  char destination, char auxiliary)
{
	if (n ==1)
	{
		printf("Move disk 1 from %c to %c\n", source, destination);
		return;
	}
	toh(n-1, source, auxiliary, destination);
	printf("Move disk %d from %c to %c\n", n, source, destination);
	toh(n-1, auxiliary, destination, source);
}
int main()
{
	int n;
	char A, B, C;
	printf("Enter the number of disk: ");
	scanf("%d",&n);
	printf("Steps of tower of hanoi: \n");
	/* In this case we took
	source = A
	destination = B
	auxiliary = C
	*/
	toh(n, 'A', 'B', 'C');
}

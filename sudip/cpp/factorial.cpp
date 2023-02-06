#include <iostream>
using namespace std;
int main ()
{
	int n, i, facto=1;
	cout <<"Enter a number ";
	cin >>n;
	for(i=1; i<=n; i++)
	{
		facto=facto*i;
	}
	cout <<"The factorial of "<<n<<"is "<<facto;
	return 0;
}

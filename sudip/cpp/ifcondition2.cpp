#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter value of a";
	cin>>a;
	
	cout<<"Enter value of b";
	cin>>b;
	
	cout<<"Enter value of c";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
				cout<<"A is greater.";
		}
		else
		{
				cout<<"C is greater.";
		}
	}
	else
	{

		if(b>c)
		{
				cout<<"B is greater.";
		}
		else
		{
				cout<<"C is greater.";
		}
}
}

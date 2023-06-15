#include <iostream>
#include <stdlib.h>
int top = -1, inp_array[10];
using namespace std;
void push()
{
	int size;
	cout<<"Enter the size of stack: ";
	cin>>size;
	int x;
	if (top == size -1)
	{
		cout<<"\n Overflow!!";	
	}
	else 
	{
		cout<"Enter the elements to be added onto the stack: ";
		cin>>x;
		top = top + 1;
		inp_array[top] = x;
	}
	cout<<inp_array[top];
}
int main()
{
	push();
	return 0;
}



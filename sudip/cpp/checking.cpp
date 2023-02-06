#include <iostream>
using namespace std;
int count =10;
int main()
{
	int count= 12;
	
	cout<<"count= "<<count<<"Global count: "<<::count;
	return 0;
}

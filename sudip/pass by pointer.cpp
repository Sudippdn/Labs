#include <iostream>
using namespace std;
class Add
{
	public:	
	int a,b,sum;

		void showdata(Add *x)
		{
			getdata();
			cout <<x->sum;
		}
		void getdata()
		{
			
			cout<<"Enter two numbers: ";
			cin>>a>>b;
			sum=a+b;
		}
		
};
int main()
{
	int y;
	Add t1;
	t1.showdata(&t1);
	return 0;
}

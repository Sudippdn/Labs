//Write a program showing base class and derived class. Show  how the members can be accessed through member function and object. Write conclusion from the output as well(public derived)
#include <iostream>
using namespace std;
class A
{
    int x;
   	protected:
    	int y;
    public:
    	int z;
    void getdata()
    {
    	cout<<"Enter the value of x: ";
        cin>>x;
		cout<<"Enter the value of y: ";
        cin>>y;
        cout<<"Enter the value of y: ";
        cin>>z;
    }
    void privatedata()
    {
    	cout<<"Value of x is"<<x<<endl;
	}
};
class B: public A
{
    public:

    void showdata()
    {

        cout<<"Value of y is "<<y<<endl;
        cout<<"Vlaue of z is "<<z<<endl;

    }

};
int main()
{./
    A first;
    B second;

    second.getdata();
    second.privatedata();
    second.showdata();


}

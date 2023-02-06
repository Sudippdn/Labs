#include<iostream>
using namespace std;
class complex 
{
  int real,imaginary;
  public:
  	complex()
  	{
  		
	 }
  	complex(int r , int i)
  	{
  		real=r;
  		imaginary=i;
	}
  	void getdata()
  	{
  		cout<<"enter the real number:"<<endl;
  		cin>>real;
  		cout<<"enter the imaginary number:"<<endl;
  		cin>>imaginary;
	 }
	 
	 void display()
  	{
  	   cout<<real;	
	}
	
	 void display2()
  	{
  	   cout<<imaginary;	
	}
  	complex operator +( complex r1)
  	{
  	    complex temp;
		temp.real=real+r1.real;
		temp.imaginary=imaginary+r1.imaginary;
		return temp;	
	}
};

int main()
{
	complex s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3= s1+s2;
	cout<<"sum of imaginary num=";
	s3.display();
	cout<<"+";
	s3.display2();
	cout<<"i";
	
	return 0;
}

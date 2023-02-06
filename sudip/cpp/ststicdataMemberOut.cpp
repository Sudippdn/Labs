//define static data member inside data member
#include <iostream>
using namespace std;
class student
{
	private:  
	
		int rollNo;
		char name[20];
		public:            
		   
	public:
	void getdata()
	{
			cout<<"roll is"<<rollNo<<endl;
			cin>>rollNo;
			cout<<"name is "<<name<<endl;
			cin>>name;
		
	}
	void showdata()
	{
			cout<<"roll is"<<rollNo<<endl;
			
			cout<<"name is "<<name<<endl;
			
		
	}
};
int main ()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}

//define static data member inside data member
#include <iostream>
using namespace std;
class student
{
	private:  
	
	//static int rollNo;
	//static char name[30];
	
		int rollNo;
		char name[20];
		public:            // we need to public the function if the classs is private
		void getdata()    //if there exist public class then we don't need public funtion
		{
			cout<<"enter roll no: "<<endl;
			cin>>rollNo;
			cout<<"enter name: "<< endl;
			cin>>name;
		}
			
		void showdata()
		{
			cout<<"roll is"<<rollNo<<endl;
			cout<<"name is "<<name<<endl;
		
		}
};

//int student:: rollNo;
//char student:: name[30];

int main ()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}

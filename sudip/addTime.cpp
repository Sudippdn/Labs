//Create a class named time and ask user to input two values of 'hr',
// 'min' and sec. Display the sum of two time in a function made outside the class
#include <iostream>
using namespace std;
class time
{
	int hr, min, sec;
	public:
		void input()
		{
			cout<<"hour time: ";
			cin>>hr;
			cout<<"min time: ";
			cin>>min;
			cout<<"sec time: ";
			cin>>sec;
		}
		void output()
		{
			cout<<"Hour= "<<hr<<" Min= "<<min<<" Sec= "<<sec<<endl;
		}
		void sum(time t1, time t2)
		{
			sec=t1.sec+t2.sec;
			min=sec/60;
			sec=sec%60;
			
			min+=t1.min+t2.min;
			hr=min/60;
			min=min%60;
			hr+=t1.hr+t2.hr;
		}

};
int main()
{
	time t1, t2, t3;
	cout <<"Enter first time:-"<<endl;
	t1.input();
	cout <<"\nEnter second time:-"<<endl;
	t2.input();
	t3.sum(t1,t2);
	t3.output();
	return 0;
}

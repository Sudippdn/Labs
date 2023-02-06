#include <iostream>
using namespace std;
class student {
	private: 
	int age=23;
	public:
		void doprint()
		{
			cout<< age;
		}
};
int main()
{
	student a;
	a.doprint();
}

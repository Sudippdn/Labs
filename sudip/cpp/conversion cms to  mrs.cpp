#include <iostream>
#include <conio.h>]
using namespace std;
class meter
{
	private:
		float length;
		public:
			meter()
			{
				length=0;
			}
			void getlength()
			{
				cout<<"Enter length: ";
				cin>>length;
			}
			operator float(){
				float len;
				len= length*100.0;
				return (len);
			}

};
int main()
{
	meter m1;
	float len1;
	m1.getlength();
	len1=m1;
	cout<<"length in cms= "<<len1;
}

#include <iostream>
using namespace std;
class Example
{
public:
    int a;
    Example add(Example Ea, Example Eb)
    {
	Example Ec; //object
    Ec.a=Ea.a+Eb.a;
    return Ec;
	}
};
int main ()
{
    
Example E1,E2,E3;
E1.a=10;        
E2.a=20;
E3.a=0;
E3=E3.add(E1,E2);
cout<<"Final value is "<< E3.a;
return 0;
}

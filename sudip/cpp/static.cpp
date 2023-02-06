#include <iostream>
using namespace std;
class Example
{
public:
    int a;
    void add(Example E){
    	E.a=a+E.a;
	}
    
};
int main ()
{
    
Example E1, E2;
E1.a=10;
E2.a=20;
E2.add(E1.a);
cout<<"Final value is "<< E2.a;
return 0;
}

#include <iostream>
using namespace std;
class Test 
{
	public:
	int x;
};
int main()
{
	Test t;
	t.x = 20;
	std::cout<<t.x;
	return 0;
}

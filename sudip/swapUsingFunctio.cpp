//Create a class named swapping which swap two number using concept of pass by reference in a function  named as swap
#include <iostream>
using namespace std;
class swapping
{
    int a,b;
public:
    void inputdata()
    {

        cout<<"Enter the value of a and b ";
        cin>>a;
        cin>>b;
        cout<<"\nThe value of a and b before swap= "<<a<<"and "<<b;
    }
    int swap()
    {
       int temp=a;
        a=b;
        b=temp;
        return temp;
    }
    void outputdata()
    {
        swap();
        cout<<"\nThe value of a and b after swap= "<<a<<"and "<<b<<endl;

    }
};
int main()
{
    swapping s1;
    s1.inputdata();
    s1.outputdata();

    return 0;
}

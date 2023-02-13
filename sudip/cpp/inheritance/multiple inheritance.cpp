#include<iostream>
using namespace std;
class baseClass1
{
    public:
    baseClass1()
    {
              cout<<"This is second base class"<<endl;
    }
    void getdata1()
    {
        cout<<"This is a first base class"<<endl;
    }
};
class baseClass2
{
    public:
    baseClass2()
    {
              cout<<"This is second base class"<<endl;
    }
    void getdata2()
    {

    cout<<"This is second base class"<<endl;
    }
};
class derivedClass : public baseClass2, public baseClass1
{

public:
    derivedClass()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main()
{
    derivedClass d;
    //d.getdata1();
    //d.getdata2();
}

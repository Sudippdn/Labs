#include <iostream>
using namespace std;
class swapping
{
    int a,b;
public:
    void inputdata(int a, int b)
    {

        cout<<"Enter the value of a and b ";
        cin>>a;
        cin>>b;
        cout<<"\nThe value of a and b before swap= "<<a<<"and "<<b;
    }
    int swap(int &a, int &b)
    {
       int temp=a;
        a=b;
        b=temp;
        return temp;
    }
    void outputdata(int a, int b)
    {
        swap(a,b);
        cout<<"\nThe value of a and b after swap= "<<a<<"and "<<b<<endl;
    }
};
int main()
{
    swapping s1,s2;
    s1.inputdata();
    s2.outputdata(s1);

    return 0;
}


#include <iostream>
using namespace std;
class student
{

    string name;
    int rollno;
    private:
    void inputdata()
    {
        cout<<"Give your name: ";
        cin>>name;
    }

public:
    void showdata()
    {
        inputdata();
         cout<<"Name: "<<name;
    }

};
int main()
{
student s;
s.showdata();
    return 0;
}

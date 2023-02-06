#include <iostream>
using namespace std;
class student 
{
    string name="sudip";
    int prize=292000;
    public:
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout <<"Prize: "<<prize<<endl;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
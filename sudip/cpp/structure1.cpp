#include <iostream>
using namespace std;
class student
{
    int id;
    string name[20];
};

int main()
{
    student s1;
    s1.id=20;
   
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;
}
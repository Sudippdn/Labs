#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout <<"Enter your age: ";
    cin >>age;
    if(age>18)
    {
        cout<<"Your are eligible for vote!"<<endl;

    }
    else
    {
        cout<<"You are just a kid. Do you want some chocolate?"<<endl;

    }
return 0;
}

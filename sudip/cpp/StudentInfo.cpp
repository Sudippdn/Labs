#include <iostream>
using namespace std;
int main()
{

    int per;
    cout<<"Enter the percentage of student: ";
    cin>>per;
    if(per>80)
    {
        cout<<"Congratulations! You got a distinction."<<endl;
    }
    else if(per>70)
    {
        cout <<"Congratulations! You got First division."<<endl;
    }
    else if(per>60)
    {
        cout <<"Congratulations! You got second division."<<endl;
    }
    else if(per>50)
    {
        cout <<"Congratulations! You got Third division."<<endl;
    }
    else if(per>40)
    {
        cout <<"Congratulations! You are pass."<<endl;
    }
    else
    {
        cout <<"Fail, You need to study more!"<<endl;
    }
    return 0;
}


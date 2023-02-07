#include <iostream>
using namespace std;
class meter
{
    private:
    float length;
    public:
    meter()
    {
        length=0;

    }
    meter(float len)
    {
        length=len/100.0;
    }
    void showspace()
    {
        cout<<"Length in meter= "<<length;
    } 
    
};
int main(){
    meter m1;
    float len1;
    cout<<"Enter length in cm: ";
    cin>>len1;
    m1=len1;
    m1.showspace();
    return 0;

}

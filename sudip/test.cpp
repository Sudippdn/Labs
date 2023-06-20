#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter number of rows and columns of matrix: ";
    cin>>r>>c;
    int a[r][c],b[r][c],s[r][c];
    cout<<"Enter elements of first matrix: ";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    cout<<"Enter elements of second matrix: ";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>b[i][j];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            s[i][j]=a[i][j]+b[i][j];
    cout<<"Sum of matrices:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<s[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

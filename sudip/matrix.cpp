//Write a program to find sum of two matrices given by user and store in another matrix
# include <iostream>
using namespace std;
int main()
{
	int mat1 [2][2], mat2[2][2], mat3[2][2];
	int i, j;
	cout<<"---Enter the elements of first matrix----"<<endl;
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cin>>mat1[i][j];	
		}	
	}
	cout<<"---The elements of first matrix----"<<endl;
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cout<<mat1[i][j];
			cout<<"\t";
		}
			cout<<" \n";			
	}
	cout<<"---Enter the elements of second matrix----"<<endl;
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cin>>mat1[i][j];	
		}	
		
	}
	cout<<"---The elements of second matrix----"<<endl;
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cout<<mat1[i][j];
			cout<<"\t";
		}	
			cout<<" \n";
	}
	cout<<"---Display the sum of the matrices---"<<endl;
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			mat3[i][j] = mat1[i][j]+ mat2[i][j];
		}	
	}
	for (i=0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cout<<mat3[i][j];
			cout<<"\t";
		}	
			cout<<" \n";
	}
}

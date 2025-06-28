#include<iostream>
using namespace std;
int main()
{
    int size;
    int sum=0;
	cout<<"Enter size of array:\t";
	cin>>size;

	int *myArray=new int[size];	
cout<<endl<<"enter the values of array"<<endl;
for(int j=0;j<size;j++)
{
    cin>>myArray[j];
}
	
	for(int i=0 ; i<size ; i++)
	{
		
	sum=sum+*(myArray+i);
	}
cout<<endl<<"sum of array="<<sum;
	
}
    
    
    
    
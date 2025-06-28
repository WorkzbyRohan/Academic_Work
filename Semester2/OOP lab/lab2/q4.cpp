#include<iostream>
using namespace std;
int main()
{
    int size;
    int search;
	cout<<"Enter size of array:\t";
	cin>>size;

	int c=0;
	int *myArray=new int[size];	
cout<<endl<<"enter the values of array"<<endl;
for(int j=0;j<size;j++)
{
    cin>>myArray[j];
}
cout<<endl<<"enter the value to search in array=";
cin>>search;
	
	for(int i=0 ; i<size ; i++)
	{
		
	if(*(myArray+i)==search)
	{
	    cout<<endl<<"value exist in array";
	    c++;
	}
	}
if(c==0){
    cout<<endl<<"value dont exist";
}
	
}
    
    
    
    
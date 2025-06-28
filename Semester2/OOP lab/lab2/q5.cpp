#include<iostream>
using namespace std;
void reversearray(int*myArray,int size,int *ptr1,int *ptr2)
{ 
    
    
    int temp,j=size-1;
    ptr1=&myArray[0];
    ptr2=&myArray[size-1];
    for(int i=0;i<=j;i++,j--)
    {
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    for(int k=0;k<size;k++)
    {
        cout<<*(myArray+k)<<" ";
    }
}
int main(){
    
int *ptr1,*ptr2;
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

cout<<endl<<"reverse  array=";
reversearray(myArray,size,ptr1,ptr2);
	
	
	
}
    
    
    
    
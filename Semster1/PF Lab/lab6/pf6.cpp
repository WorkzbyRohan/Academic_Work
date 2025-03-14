#include<iostream>
using namespace std;
int main()
{
int i=2,n,x=0,y=1,z=0;
cout<<"enter the limit:";
cin>>n;
cout<<x<<","<<y;
while(i<n){
z=x+y;
x=y;
y=z;
i++;
cout<<","<<z;

}

}




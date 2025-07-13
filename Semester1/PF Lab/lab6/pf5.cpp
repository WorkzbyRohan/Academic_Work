#include<iostream>
using namespace std;
int main()
{
int x,y=2,count=0,z;
cout<<"enter a number=";
cin>>x;
if(x<0){
    cout<<"you entered a invalid number";
}
else{
while(y<x)
{
z=x%y;

if(z==0)
{
    count++;
}
y++;

}
if(count==0)
{
cout<<x<<" is a prime  number";
}
else
{
    cout<<x<<" is not a prime  number";
}

}


}
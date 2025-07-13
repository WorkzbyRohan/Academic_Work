#include<iostream>
using namespace std;
int main()
{
int x,y,sum;
cout<<"enter number=";
cin>>x;
while(x>0)
{
y=x%10;
sum=sum+y;
x=x/10;
}
cout<<endl<<"sum of numbers is:"<<sum;







}
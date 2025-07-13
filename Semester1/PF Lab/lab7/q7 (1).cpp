#include<iostream>
using namespace std;
int main()
{ 
    int n,p,sum;
cout<<"enter the limit :";
cin>>n;
for(int i=1;i<=n;i++)
{
p=i*i;
cout<<endl<<i<<"^2"<<"+";
sum=sum+p;
}

cout<<endl<<"sum="<<sum;



}

#include<iostream>
using namespace std;
int main()
{
int amountdue,customerrecipiet,remain,dollars,q,d,n,p;
cout<<"enter the due amount=";
cin>>amountdue;
cout<<endl<<"enterr the cuastomer receipit=";
cin>>customerrecipiet;
remain=customerrecipiet-amountdue;
dollars=remain/100;
cout<<endl<<"no of dollars="<<dollars;
remain=remain%100;
q=remain/25;
cout<<endl<<"no of quaters="<<q;
remain=remain%25;
d=remain/10;
cout<<endl<<"np of dimes="<<d;
remain=remain/5;
n=remain/5;
cout<<endl<<"no of nickels="<<n;
p=remain%5;
cout<<endl<<"no of pennies="<<p;
}

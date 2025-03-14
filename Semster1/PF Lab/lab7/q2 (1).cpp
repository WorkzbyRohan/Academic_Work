#include<iostream>
using namespace std;
int main()
{
int n,f=1,s=0;
cout<<"enter a number:";
cin>>n;
for(int i=1;i<=n;i++)
{
f=f*i;
;s=s+f;

}
cout<<endl<<"the factorial of a number "<<n;
cout<<"="<<f;
while(1)
{
int m;
cout<<endl<<"enter  1 to calculate factorial of another number and 0 to terminate";
cin>>m;
if(m!=0 && m!=1){
    cout<<endl<<"invalid number";
}
if(m==0)
{
    break;
}
if(m==1)
{
int n1,f1=1,s1=0;
cout<<"enter a number:";
cin>>n1;
for(int i=1;i<=n1;i++)
{
f1=f1*i;
s1=s1+f1;

}
cout<<endl<<"the factorial of a number= "<<n1;
cout<<"="<<s;

}
}

}
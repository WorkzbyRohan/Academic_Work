
#include<iostream>
using namespace std;
int main()
{
int n,a,b,c,d,e,f,p,q,r,s,s1,s2,s3,u,v,w,x;
cout<<"enter the 8-digit account number=";
cin>>n;
a=n;

p=a%10;
a=a/10;
a=a/10;
q=a%10;
a=a/10;
a=a/10;
r=a%10;
a=a/10;
a=a/10;
s=a%10;
s1=p+q+r+s;
cout<<endl<<s1;
b=n;
b=b/10;
c=b%10;
b=b/10;
b=b/10;
d=b%10;
b=b/10;
b=b/10;
e=b%10;
b=b/10;
b=b/10;
f=b%10;
c=c+c;
d=d+d;
e=e+e;
f=f+f;
u=c%10;
c=c/10;
v=d%10;
d=d/10;
w=e%10;
e=e/10;
x=f%10;
f=f/10;
s2=c+d+e+f+u+v+w+x;
cout<<endl<<s2;
s3=s1+s2;
cout<<endl<<s3;

if(s3%10==0)
{
   cout<<endl<<" number is valid";

}
else{
cout<<endl<<"number is invalid";
s3=s3%10;
cout<<endl<<"you must enter="<<s3<<"to make it coorect";

}

}
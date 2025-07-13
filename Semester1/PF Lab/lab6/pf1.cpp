#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"enter first number=";
cin>>x;
cout<<endl<<"enter second number=";
cin>>y;
cout<<endl<<"enter third number=";
cin>>z;
if(x>y && x>z)
{
    cout<<x<<"is largest";
}
else if(y>x && y>z )
{
    cout<<y<<"is largest";
}
else{
    cout<<z<<"is largest";
}

}
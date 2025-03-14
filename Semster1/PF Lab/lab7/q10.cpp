#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
int a[5];
cout<<"enter values"<<endl;
for(int i=0;i<5;i++)
{
    
    cin>>a[i];
}
cout<<"reverse values"<<endl;
for(int j=4;j>=0;j--)
{
    cout<<a[j]<<endl;
}

//int size=sizeof(a)/sizeof(a[0]);


}
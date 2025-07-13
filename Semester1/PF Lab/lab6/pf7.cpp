#include<iostream>
using namespace std;
int main()
{
int num,originalnum,result=0,remainder;
cout<<"enter three digit number=";
cin>>num;
originalnum=num;
while(originalnum!=0)
{
    remainder=originalnum%10;
    result+=remainder*remainder*remainder;
    originalnum=originalnum/10;
}
if(result==num){
    cout<<endl<<num<<" is armstrong number";
}
else{
    cout<<endl<<num<<" is not armstrong number";
}



}
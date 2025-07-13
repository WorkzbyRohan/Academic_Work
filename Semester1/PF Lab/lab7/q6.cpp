#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
   int i=n;
   int j=1;
do
{
do
{
    cout<<i;
}while(j<=i);
j++;
cout<<endl;

}while(i<=1);
i--;



}
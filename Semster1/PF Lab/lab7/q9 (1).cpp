#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));

int a[5],sum=0;
for(int i=0;i<5;i++)
{
a[i]=(rand()%(5-0))+0;
cout<<a[i]<<" ";
sum=sum+a[i];

}
cout<<endl<<"random values sum:"<<sum;




}
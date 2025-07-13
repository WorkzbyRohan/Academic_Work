#include<iostream>
using namespace std;
void multiple()
{
    for(int i=1;i<=10;i++)
    {
        cout<<"5"<<"*"<<i<<"="<<5*i;
        cout<<endl;
    }
    
}
int series_sum()
{
    int  series=0;
for(int i=1;i<=1000;i++)
{
    series=series+i;
    
}
return series;

}
int sum_between(int a,int b)
{
    int sum1=0;
    for(int i=a;i<=b;i++)
    {
        sum1=sum1+i;
    }
    return sum1;
}
void f1()
{
    float avg;
    int sum2=0;
 int a[1000];
for(int i=5;i<1000;i++)
{
a[i]=sum_between(2,i+5);
sum2=sum2+a[i];
}
avg=sum2/995;
cout<<avg;
}

int main()
{
int value;
cout<<"enter a value between 1 and 4";
cin>>value;
if(value>0 && value<5)
{
if(value==1)
{
multiple();
cout<<endl;

}
if(value==2)
{
    int sum=series_sum();
 cout<<sum<<endl;
}
if(value==3)
{
    int s,e;
cout<<"enter the start value=";
cin>>s;
cout<<endl<<"enter the end value=";
cin>>e;
int sum=sum_between(s,e);
cout<<endl<<sum<<endl;

}
if(value==4)
{
f1();
cout<<endl;

}




}
}
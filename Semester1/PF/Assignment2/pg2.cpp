#include<iostream>
using namespace std;
int main()
{
float buy,com1,sell,com2,profit;
buy=1000*45.50;
com1=buy*2/100;
sell=1000*56.90;
com2=sell*2/100;
 profit=sell-com1-com2-buy;
cout<<"buy stock="<<buy;
cout<<endl<<"commision on buying="<<com1;
cout<<endl<<"sell stocks="<<sell;
cout<<endl<<"commission on selling="<<com2;
cout<<endl<<"total profit is="<<profit;








}
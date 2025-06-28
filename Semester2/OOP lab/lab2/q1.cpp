#include<iostream>
using namespace std;
int main()


{
int *speed = new int;
double *travelTime;
double *distance;
*speed = 65;
*travelTime = 8.5;
distance=new double;
*distance = (*speed)*(*travelTime);
cout << *distance ;
return 0;
}
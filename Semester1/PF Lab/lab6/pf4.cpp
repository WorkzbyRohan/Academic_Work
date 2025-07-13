#include<iostream>
using namespace std;
int generateRandomNumber(){
    srand(time(0));
    return(1+rand()%20);
}
int main()
{
int r=generateRandomNumber();
int b=0;
while(b != r){
cout<<"enter your guees number"<<endl;
cin>>b;
if(b>r)
{
    cout<<"entered number is larger"<<endl;
}
else if(b<r)
{
cout<<"entered number is smaller"<<endl;
}
else{
    cout<<"you guessed the right number";
}
}


}

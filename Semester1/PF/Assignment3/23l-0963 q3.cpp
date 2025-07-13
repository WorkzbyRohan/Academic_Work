// Online C++ compiler to run C++ program onl
#include<iostream>
#include<cmath>
using namespace std;

int main()
{int n;
cout<<"enter the height=";
cin>>n;
cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(i+j==n+1 || j-i==n-1)
           { cout<<"*";}
           
            
           
         else{
             cout<<" ";
         }
         
        }
        cout<<endl;
        
        
        
        
        
        
    }
    int p=2*n-1;
    for(int i=1;i<=n;i++)
    {
    
    for(int j=p;j>=1;j--)
    {
    if(i==j || i+j==2*n)
    {
    cout<<"*";
    }
    else{
    cout<<" ";
    }
    }
    
    
    
    
    
    cout<<endl;
    
    
    
    
    
    
    
    
    
    }
    
    
    
    
    
}
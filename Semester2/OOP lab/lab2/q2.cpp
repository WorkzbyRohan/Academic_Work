#include<iostream>
using namespace std;
void swapUsingPointers(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
      
    
    
    
    }
    

void swapUsingReferences(int &a, int &b)
{
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    
    
}
int main() {
int* num1 = new int;
int* num2 = new int;
*num1=10;
*num2=20;
std::cout << "Before swapping: num1 = " << *num1 << ", num2 = " <<
*num2 << std::endl;
// Call the swapUsingPointers function to swap num1 and num2
//using pointers

 swapUsingPointers( num1,  num2);
std::cout << "After pointer swapping: num1 = " << *num1 << ", num2="
 << *num2 << std::endl;
// Reset values
int nu1 = 10;
int nu2 = 20;
swapUsingReferences(nu1,  nu2);
std::cout << "After reference swapping: num1 = " << nu1 << 
",num2 = " << nu2 << std::endl;
return 0;
}
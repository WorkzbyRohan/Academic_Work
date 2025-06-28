#include<iostream>
using namespace std;

void* inputarray(int* arr, int& size);
void outputarray(int* arr, int& size)
{
	cout << endl << "output array=";
	for (int j = size-1; j>=0; j--)
	{
		cout << *(arr + j) << " ";
	}
	

}
void* AllocateAndCopy(int* arr, int& size)
{
	size = size * 2;
	int* newarr = new int[size];
	for (int j = 0; j < size/2; j++)
	{
		*(newarr + j) = *(arr + j);
	}
	inputarray(newarr, size);
	return 0;
}
void* inputarray(int *arr,int& size)
{
	
	
	for (static int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
		if (*(arr + i) == -1)
		{
			outputarray(arr, i);
			delete[]arr;
			arr = nullptr;
			return 0;
		}
	}
	AllocateAndCopy(arr, size);
}
int main()
{
	int size=5;
	int* arr=new int[size];
	inputarray(arr, size);



}
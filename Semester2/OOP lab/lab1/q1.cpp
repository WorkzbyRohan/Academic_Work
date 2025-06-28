#include<iostream>
using namespace std;
int main()
{
	int size,target,g=0;
	cout << "enter the size of array=";
	cin >> size;
	int* myarray = new int[size];
	cout << "input array";
	for (int i = 0; i < size; i++)
	{
		cin >> myarray[i];

    }
	cout << endl<<"enter the target value to search=";
	cin >> target;
	for(int j=0;j<size;j++)
	{
		if (myarray[j] == target)
		{
			cout << "the target value exist in array";
			cout <<endl<< "your target value is on index=" << j;
			g++;
	    }
		
	
	}

	if (g == 0)
	{
		cout << "value do not exist";
	}
		
}
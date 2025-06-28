//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int size, target,temp;
//	cout << "enter the size of array=";
//	cin >> size;
//	int* myarray = new int[size];
//	cout << "input array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> myarray[i];
//
//	}
//	
//	cout << endl << "sorting array";
//	for (int i = 0; i < size; i++)
//	{
//		for (int l = 0; l < size; l++) 
//		{
//			if (myarray[i] < myarray[l])
//			{
//				temp = myarray[i];
//				myarray[i] = myarray[l];
//				myarray[l] = temp;
//			}
//		}
//	}
//	for (int k = 0; k < size; k++)
//	{
//		cout << myarray[k]<<" ";
//	}
//	cout << endl << "enter the target value to search=";
//	cin >> target;
//	int g = 0;
//	int last = size - 1;
//	int mid = last / 2;
//	for (int j = 0; j < size; j++)
//	{
//		if (myarray[mid] < target)
//		{
//			mid = (j + last) / 2;
//		}
//		else if (myarray[mid] > target)
//		{
//			mid = (last - j) / 2;
//		}
//		 else if (myarray[mid] == target)
//		{
//			cout <<endl<< "your value exist";
//			g++;
//			break;
//		}
//	
//	}
//	if (g == 0)
//	{
//		cout << "value dont exist";
//	}
//
//}

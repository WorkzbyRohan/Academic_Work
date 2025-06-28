//#include<iostream>
//using namespace std;
//int* inputarray(int& size)
//{
//	cout << "enter the size of array=";
//	cin >> size;
//	int* temp = new int[size];
//	cout << endl << "input array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> *(temp + i);
//
//	}
//	return temp;
//
//}
//void outputarray(int* arr, int& size)
//{
//	cout << endl << "output array=";
//	for (int j = 0; j < size; j++)
//	{
//		cout << *(arr + j) <<" ";
//	}
//	
//
//}
//int main()
//{
//	int size;
//	int* arr;
//	arr = inputarray(size);
//	outputarray(arr, size);
//	delete[] arr;
//
//}
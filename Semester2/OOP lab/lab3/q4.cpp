//#include<iostream>
//using namespace std;
//
//
//int sumarray(int* arr, int& size)
//{int sum = 0;
//	cout << endl << "sum array=";
//	for (int j = 0; j < size; j++)
//	{
//		sum=sum+ *(arr + j) ;
//	}
//
//	return sum;
//}
//int main()
//{
//	int size;
//
//	cout << "enter the size of array=";
//	cin >> size;
//	int* arr= new int[size];
//	cout << endl << "input array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> *(arr+ i);
//
//	}
//	
//	int s = sumarray(arr, size);
//	cout << s;
//	delete[] arr;
//
//}
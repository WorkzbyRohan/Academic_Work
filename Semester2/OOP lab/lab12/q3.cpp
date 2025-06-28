//#include<iostream>
//#include<math.h>
//using namespace std;
//class ArrayIndexOutOfBoundsException : public exception
//{
//public:
//	const char* what()const throw() 
//	{
//
//		return " Array is out of bound";
//	}
//	void well()
//	{
//		cout << what();
//	}
//};
//int getElementAtIndex(int arr[], int i)
//{
//	if (i < 0 || i>4)
//	{
//		throw  ArrayIndexOutOfBoundsException();
//	}
//	return arr[i];
//
//
//
//}
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int i;
//	cout << "enter the index number=";
//	cin >> i;
//	
//	try {
//		            int element = getElementAtIndex(arr, i);
//		            cout << "Element at index " << i << " is " << element << endl;
//		        }
//		        catch (ArrayIndexOutOfBoundsException& e) {
//		            e.well();
//		        }
//		
//		        return 0;
//		    
//
//
//
//}
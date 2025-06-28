//
//#include<iostream>
//using namespace std;
//int main() 
//{
//	int size, temp;
//	cout << "enter the size of array=";
//	cin >> size;
//	int* myarray = new int[size];
//	cout << "input array"<<endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> myarray[i];
//
//	}
//	cout << endl<<"bubble sorting=";
//	{
//		for (int i = 0; i < size; i++)
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
//		cout << myarray[k] << " ";
//	}
// 
//	}
//	cout << endl << "selection sorting=";
//	int minimum;
//	for (int i = 0; i < size; i++)
//	{
//		minimum = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (myarray[j] < myarray[minimum])
//			{
//				minimum = j;
//			}
//
//		}
//      
//
//		temp = myarray[i];
//		myarray[i] = myarray[minimum];
//		myarray[minimum] = temp;
//	
//
//
//}
//	for (int k = 0; k < size; k++)
//	{
//		cout << myarray[k] << " ";
//	}
//	cout << endl << "insertion sorting=";
//	
//
//		int k, l;
//		for(int i=0;i<size;i++)
//		{
//	    
//			k = myarray[i];
//			l = i - 1;
//			while (l >= 0 && myarray[l] > k)
//			{
//				myarray[l + 1] = myarray[l];
//				l = l - 1;
//			}
//
//			myarray[l + 1] = k;
//		}
//		for (int k = 0; k < size; k++)
//		{
//			cout << myarray[k] << " ";
//		}
//}
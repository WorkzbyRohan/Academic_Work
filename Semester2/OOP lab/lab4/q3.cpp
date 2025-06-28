//#include<iostream>
//#include<string>
//using namespace std;
//
// void ShallowCopy(int** matrix, int r, int c)
//{
//	int** array = new int*[r];
//	for (int k = 0; k < r; k++)
//	{
//		*(array + k)=new int[k]  ;
//	}
//	cout << endl << "shalow copy" << endl;
//	for (int i = 0; i <r; i++)
//	{
//		for (int j = 0; j <c; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
// void deepcopy(int** matrix, int r, int c)
// {
//	 int** arr=new int*[r];
//	 for (int i = 0; i < r; i++)
//	 {
//		 arr[i] = new int[c];
//	 }
//	 for (int i = 0; i <r; i++)
//	 {
//		 for (int j = 0; j< c; j++)
//		 {
//			 arr[i][j] = matrix[i][j];
//		 }
//
//
//
//	 }
//	 cout << "deep copy" << endl;
//	 for (int i = 0; i < r; i++)
//	 {
//		 for (int j = 0; j < r; j++)
//		 {
//			 cout << matrix[i][j] << " ";
//		 }
//		 cout << endl;
//	 }
// 
// 
// 
// 
// }
//int main()
//{
//	int r, c;
//	int** matrix = nullptr;
//	
//
//
//	cout << "enter the no of rows=";
//	cin >> r;
//	cout << endl << "enter the no of column=" ;
//	cin >> c;
//	matrix = new int* [r];
//	for (int i = 0; i < r; i++)
//	{
//		matrix[i] = new int[c];
//	}
//	
//	cout << "original matrix";
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			matrix[i][j] = j + i;
//			cout<<matrix[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	
//	ShallowCopy(matrix, r, c);
//	
//	deepcopy(matrix, r, c);
//	
//
//
//
//}
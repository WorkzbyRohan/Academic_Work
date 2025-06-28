//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int** InputMatrix(fstream& fin, int& r, int& c)
//{
//    fin >> r >> c;
//    int** matrix = new int* [r];
//    for (int i = 0; i < r; i++)
//    {
//        
//        *(matrix+i) = new int[c];
//    }
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            fin >> *(*(matrix+i)+j);
//        }
//    }
//    return matrix;
//}
//void OutputMatrix(int** matrix, const int& r, const int& c)
//{
//    
//     
//    
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            cout << *(*(matrix + i) + j) << " ";
//        }
//        cout << endl;
//    }
//    
//    
//}
//int** AddMatrix(int** matrix1, int** matrix2, const int& r, const int& c)
//{
//    int** matrixR = new int* [r];
//    for (int i = 0; i < r; i++)
//    {
//        *(matrixR+i) = new int[c];
//    }
//    for (int j = 0; j < r; j++)
//    {
//        for (int k = 0; k < c; k++)
//        {
//             *(*(matrixR + j) + k) = *(*(matrix1+j)+k) + *(*(matrix2 + j) + k) ;
//        }
//        cout << endl;
//
//    }
//
//    return matrixR;
//
//}
//
//int** TransposeMatrix(int** matrix, const int& r, const int& c)
//{
//    int** matrixT = new int* [c];
//    for (int i = 0; i < c; i++)
//    {
//        matrixT[i] = new int[r];
//    }
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            matrixT[j][i] = matrix[i][j];
//        }
//    }
//    return matrixT;
//}
//bool IsSymmetric(int** matrix,const int& r, const int& c)
//{
//    int o = 0;
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            if (*(*(matrix+i)+j) != *(*(matrix + j) + i))
//            {
//                return false;
//            }
//        }
//    }
//    
//        return true;
//
//}
//void InterchangeRows(int** matrix, const int& r, const int& c)
//{
//    cout << endl << "enter row number to interchange" << endl;
//    int d, e;
//    cout << "row nuber 1=";
//    cin >> d;
//    cout << "row nuber 2=";
//    cin >> e;
//    d = d - 1;
//    e = e - 1;
//    int temp;
//        for (int j = 0; j < c; j++)
//        {
//            temp = *(*(matrix+d)+j);
//            *(*(matrix + d) + j) = *(*(matrix + e) + j);
//            *(*(matrix + e) + j) = temp;
//        }
//        for (int i= 0; i< r; i++)
//        {
//            for (int j = 0; j < c; j++)
//            {
//                cout << *(*(matrix + i) + j) <<" ";
//              }
//            cout << endl;
//        }
//}
//
//
//int main() 
//{
//    fstream fin("C:\\Users\\Hp\\Desktop\\matrix.txt");
//    int rows=0, cols=0;
//    int r1, r2, r3, c1, c2, c3;
//    
//    int** matrixA = InputMatrix(fin, rows, cols);
//    r1 = rows, c1 = cols;
//    cout << r1 << "by" << c1 << endl;
//    cout << "matrix A =" << endl;
//    OutputMatrix(matrixA, rows, cols);
//    int** matrixB = InputMatrix(fin, rows, cols);
//    r2 = rows, c2 = cols;
//    cout << r2 << "by" << c2 << endl;
//    cout << "matrix B =" << endl;
//    OutputMatrix(matrixB, rows, cols);
//
//    int** matrixC = InputMatrix(fin, rows, cols);
//    r3 = rows, c3 = cols;
//    cout << r3 << "by" << c3 << endl;
//    cout << "matrix C =" << endl;
//    OutputMatrix(matrixC, rows, cols);
//    if (r1 == r2 && c1 == c2)
//    {
//
//      int**matrixR=AddMatrix(matrixA, matrixB, r1, c1);
//      cout << " sum A+B=" << endl;
//      OutputMatrix(matrixR, r1, c2);
//    }
//    else
//    {
//        cout << "Sum of A and B is not possible"<<endl;
//    }
//    if (r2 == r3 && c2 == c3)
//    {
//        int** matrixR = AddMatrix(matrixB, matrixC, r1, c1);
//        cout << " sum A+B=" << endl;
//        OutputMatrix(matrixR, r1, c1);
//    }
//    else
//    {
//        cout <<endl<< "Sum of B + C is not possible"<<endl;
//    }
//    if (r1 == r3 && c1 == c3)
//    {
//        int** matrixR = AddMatrix(matrixA, matrixC, r1, c1);
//        OutputMatrix(matrixR, r1, c1);
//    }
//    else
//    {
//        cout << "Sum of A + C is not possible"<<endl;
//    }
//    int**matrixTA=TransposeMatrix(matrixA, r1, c1);
//    cout << "transpose matrix A="<<endl;
//    OutputMatrix(matrixTA  , r1, c1);
//   
//     int**matrixTB = TransposeMatrix(matrixB, r2, c2);
//     cout << "transpose matrix B=" << endl;
//    
//    OutputMatrix(matrixTB, r2, c2);
//    int**matrixTC = TransposeMatrix(matrixC, r3, c3);             
//    cout << "transpose matrix C=" << endl;
//    OutputMatrix(matrixTC, c3, r3);
//    
//    
//   
//   int f= IsSymmetric(matrixA,  r1, c1);
//   if (f == true)
//   {
//       cout<<"matrix A is symmetric"<<endl;
//   }
//   else
//   {
//       cout << "matrix A is not symmetric"<<endl;
//   }
//   int g=IsSymmetric(matrixB,  r2, c2);
//   if (g == true)
//   {
//       cout << "matrix B is symmetric"<<endl;
//   }
//   else
//   {
//       cout << "matrix B is not symmetric"<<endl;
//   }
//   char A;
//   cout <<endl<< "select A,B or C to interchange rows=";
//   cin >> A;
//   
//
//   if (A== 'A' || A == 'a')
//   {
//       cout << endl << " After Interchanging Rows Matrix A ="<<endl;
//       InterchangeRows(matrixA, r1, c1);
//   }
//   if (A == 'B' || A == 'b')
//   {
//       cout << endl << " After Interchanging Rows Matrix B="<<endl;
//       InterchangeRows(matrixB, r2, c2);
//   }
//   if (A == 'C' || A == 'c')
//   {
//       cout << endl<<" After Interchanging Rows Matrix C ="<<endl;
//       InterchangeRows(matrixC, r3, c3);
//   }
//   /*for (int i = 0; i < r1; i++)
//   {
//       delete[] matrixA[i];
//   }
//   delete[] matrixA;
//
//   for (int i = 0; i < r2; i++)
//   {
//       delete[] matrixB[i];
//   }
//   delete[] matrixB;
//   for (int i = 0; i < r3; i++)
//   {
//       delete[] matrixC[i];
//   }
//   delete[] matrixC;
//   for (int i = 0; i < r1; i++)
//   {
//       delete[] matrixTA[i];
//   }
//   delete[] matrixTA;
//   for (int i = 0; i < r2; i++)
//   {
//       delete[] matrixTB[i];
//   }
//   delete[] matrixTB;
//   for (int i = 0; i < r3; i++)
//   {
//       delete[] matrixTC[i];
//   }
//   delete[] matrixTC;*/
//  
//
//
//
//}

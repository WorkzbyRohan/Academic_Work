#include <iostream>
using namespace std;
class matrix
{
private:
    int** mat;
    int s;
public:
    matrix(int size = 0)
    {
        s = size;
        mat = new int* [size];
        for (int i = 0; i < size; i++)
        {
            mat[i] = new int[size];
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                mat[i][j] = i + j;

            }
        }
    }

    void operator*(matrix a)
    {
        if (s == a.s)
        {
            int** rslt = new int* [s];
            for (int i = 0; i < s; i++)
                rslt[i] = new int[s];
            cout << "Multiplication of given two matrices is:\n";

            for (int i = 0; i < a.s; i++) {
                for (int j = 0; j < s; j++) {
                    rslt[i][j] = 0;

                    for (int k = 0; k < a.s; k++) {
                        rslt[i][j] += (this->mat[i][k] * a.mat[k][j]);
                    }

                    cout << rslt[i][j] << "\t";
                }

                cout << endl;
            }
        }

        else
        {
            cout << "not possible";
        }
    }
};

int main()
{
    matrix m1(3), m2(3);
    m1* m2;
}
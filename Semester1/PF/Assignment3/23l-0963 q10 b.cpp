#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

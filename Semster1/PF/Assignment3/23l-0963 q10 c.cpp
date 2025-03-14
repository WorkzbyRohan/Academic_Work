#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch;

    // Input for size and character
    cout << "Enter Number: ";
    cin >> n;
    cout << "Enter character to Print: ";
    cin >> ch;
    cout << endl;

   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (i == j || i + j == n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}

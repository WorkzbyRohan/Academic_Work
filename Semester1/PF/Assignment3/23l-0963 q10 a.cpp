#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows = ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) {
            if (j <= n - i || j > n + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  
    }

   
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= 2 * n; j++) {
            if (j <= n - i || j > n + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  
    }

    return 0;
}

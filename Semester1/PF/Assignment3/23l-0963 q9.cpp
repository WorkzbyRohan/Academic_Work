#include<iostream>
using namespace std;

int main() {
    int n, s = 0, p;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        int j = i;
        int count = 1; 

        cout << "Sequence for " << i << ": " << j << " ";

        while (j > 1) {
            if (j % 2 == 0) {
                j = j / 2;
            } else {
                j = j * 3 + 1;
            }
            cout << "-> " << j << " ";
            count++;
        }

        cout << endl;

        if (count > s) {
            s = count;
            p = i;
        }
    }

    cout << "\nThe number having the longest sequence = " << p << endl;
    return 0;
}

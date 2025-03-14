#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Ensure num1 is smaller
    if (num1 > num2) {
        swap(num1, num2);
    }

    int count3 = 0, count5 = 0;

    
    for (int i = num1; i <= num2; ++i) {
        if (i % 3 == 0) {
            count3++;
        }
        if (i % 5 == 0) {
            count5++;
        }
    }

    
    cout << "Multiples of 3: " << count3 << endl;
    cout << "Multiples of 5: " << count5 << endl;

    return 0;
}

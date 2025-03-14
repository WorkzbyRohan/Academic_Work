#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num >= 0) {
        sum += num;  
        cout << "Enter another number: ";
        cin >> num;
    }

    cout << "You entered a negative number." << endl;
    cout << "Total sum: " << sum << endl;
    return 0;
}

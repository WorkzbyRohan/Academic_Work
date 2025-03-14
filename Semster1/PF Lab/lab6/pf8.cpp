#include<iostream>
using namespace std;

int main() {
    int num, x, y, reverse = 0;
    cout << "Enter a number = ";
    cin >> num;
    x = num;

    while (x != 0) {
        y = x % 10;
        reverse = reverse * 10 + y;
        x = x / 10;
    }

    if (reverse == num) {
        cout << num << " is a palindrome" << endl;
    } else {
        cout << num << " is not a palindrome" << endl;
    }

    return 0;
}

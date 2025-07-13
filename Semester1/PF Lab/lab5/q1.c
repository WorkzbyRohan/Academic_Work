#include<iostream>
using namespace std;

int main() {
    char x;
    cout << "Enter an alphabet: ";
    cin >> x;

    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
        if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u') {
            cout << "You entered a vowel." << endl;
        } else {
            cout << "You entered a consonant." << endl;
        }
    } else {
        cout << "You entered an invalid character." << endl;
    }

    return 0;
}

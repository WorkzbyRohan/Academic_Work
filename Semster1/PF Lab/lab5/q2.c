#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the values of x and y: ";
    cin >> x >> y;

    char oper; // Changed to char to accept operator symbols like +, -, *, /
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "Result: " << x + y;
            break;
        case '-':
            cout << "Result: " << x - y;
            break;
        case '*':
            cout << "Result: " << x * y;
            break;
        case '/':
            if (y != 0)
                cout << "Result: " << x / y;
            else
                cout << "Error: Division by zero is not allowed.";
            break;
        default:
            cout << "Invalid operator.";
            break;
    }

    return 0;
}

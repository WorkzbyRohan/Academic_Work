#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\nSelect a program to run:" << endl;
        cout << "1. Print Welcome Message" << endl;
        cout << "2. Take Two Integers and Print" << endl;
        cout << "3. Sum of Two Numbers" << endl;
        cout << "4. Check Positive Integer" << endl;
        cout << "5. Multiply Two Numbers (Pseudo Code)" << endl;
        cout << "6. Divide Number by 10" << endl;
        cout << "7. Fahrenheit to Celsius" << endl;
        cout << "8. Area of Circle" << endl;
        cout << "9. Square of a Number" << endl;
        cout << "10. Temperature Alert" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Welcome to vs code!" << endl;
        }
        else if (choice == 2) {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "You entered: " << a << " and " << b << endl;
        }
        else if (choice == 3) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum: " << a + b << endl;
        }
        else if (choice == 4) {
            int num;
            cout << "Enter an integer: ";
            cin >> num;
            if (num >= 0) {
                cout << "The number is positive." << endl;
            } else {
                cout << "Error: Number is not positive." << endl;
            }
        }
        else if (choice == 5) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Product: " << a * b << endl;
        }
        else if (choice == 6) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "Result: " << num / 10.0 << endl;
        }
        else if (choice == 7) {
            double fahrenheit, celsius;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << celsius << endl;
        }
        else if (choice == 8) {
            double radius, area;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of the circle: " << area << endl;
        }
        else if (choice == 9) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "Square: " << num * num << endl;
        }
        else if (choice == 10) {
            double temp;
            cout << "Enter the temperature: ";
            cin >> temp;
            if (temp > 45) {
                cout << "Alert: Temperature is above 45 degrees!" << endl;
            } else {
                cout << "Temperature is normal." << endl;
            }
        }
        else if (choice == 0) {
            cout << "Exiting the program." << endl;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}

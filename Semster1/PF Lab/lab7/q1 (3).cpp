#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int choice;
    do {
        cout << "\nPlease Enter QN: 1, 2, 3, 4, 5, 6, 7, 8, 9, A: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Square roots of odd numbers from 1 to 50
                for (int n = 1; n <= 50; n += 2) {
                    double sq = sqrt(n);
                    cout << "Square root of " << n << " = " << sq << endl;
                }
                break;
            }

            case 2: {
                // Factorial Sum Calculation
                int n, f = 1, s = 0;
                cout << "Enter a number: ";
                cin >> n;

                for (int i = 1; i <= n; i++) {
                    f *= i;
                    s += f;
                }

                cout << "Sum of factorials up to " << n << " = " << s << endl;
                break;
            }

            case 3: {
                // Power Calculation
                int x, y;
                cout << "Enter base: ";
                cin >> x;
                cout << "Enter exponent: ";
                cin >> y;

                cout << x << "^" << y << " = " << pow(x, y) << endl;
                break;
            }

            case 4: {
                // Multiplication Table
                int n, l;
                cout << "Enter the number: ";
                cin >> n;
                cout << "Enter the length of the table: ";
                cin >> l;

                for (int i = 1; i <= l; i++) {
                    cout << n << " * " << i << " = " << n * i << endl;
                }
                break;
            }

            case 5: {
                // Hotel Room Calculation
                int floors, totalRooms = 0, occupiedRooms = 0;
                cout << "Enter the number of floors: ";
                cin >> floors;

                for (int i = 1; i <= floors; i++) {
                    if (i == 13) continue; // Skip the 13th floor

                    int rooms, occupied;
                    cout << "Enter the number of rooms on floor " << i << ": ";
                    cin >> rooms;
                    cout << "Enter the number of occupied rooms: ";
                    cin >> occupied;

                    totalRooms += rooms;
                    occupiedRooms += occupied;
                }

                cout << "Total occupied rooms: " << occupiedRooms << endl;
                cout << "Total unoccupied rooms: " << totalRooms - occupiedRooms << endl;
                cout << "Occupancy rate: " << (occupiedRooms * 100.0 / totalRooms) << "%" << endl;
                break;
            }

            case 6: {
                // Number Pattern
                int n;
                cout << "Enter a number: ";
                cin >> n;

                for (int i = n; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << i;
                    }
                    cout << endl;
                }
                break;
            }

            case 7: {
                // Sum of Squares
                int n, sum = 0;
                cout << "Enter the limit: ";
                cin >> n;

                for (int i = 1; i <= n; i++) {
                    sum += i * i;
                    cout << i << "^2 + ";
                }

                cout << " = " << sum << endl;
                break;
            }

            case 8: {
                // Box Drawing
                for (int i = 1; i <= 9; i++) {
                    for (int j = 1; j <= 21; j++) {
                        if (i == 1 || i == 9 || j == 1 || j == 21) {
                            cout << "=";
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;
            }

            case 9: {
                // Random Number Generation
                srand(time(0));
                int a[5], sum = 0;

                for (int i = 0; i < 5; i++) {
                    a[i] = rand() % 5;
                    cout << a[i] << " ";
                    sum += a[i];
                }

                cout << "\nSum of random numbers: " << sum << endl;
                break;
            }

            case 'A': {
                // Array Reverse Copy
                int a[5], b[5];
                cout << "Enter 5 values: ";
                for (int i = 0; i < 5; i++) {
                    cin >> a[i];
                }

                for (int i = 0; i < 5; i++) {
                    b[i] = a[4 - i]; // Reverse copy
                }

                cout << "Reversed array: ";
                for (int i = 0; i < 5; i++) {
                    cout << b[i] << " ";
                }
                cout << endl;
                break;
            }

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }

    } while (choice != 0);

    cout << "Program terminated." << endl;
    return 0;
}

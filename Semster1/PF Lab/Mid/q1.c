#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long long int fac(unsigned int n) {
    if (n > 0) {
        return n * fac(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int x = fac(3);
    cout << "Factorial of 3: " << x << endl;

    float result = 0.12345;
    float num = 0.5;

    cout << fixed << setprecision(2);
    cout << "f(0.5) = 1";

    for (int i = 1; i <= 7; i += 2) {
        int fact = fac(i);
        if (i % 3 == 0) {
            cout << " + " << num << "^" << i << "/" << i << "!";
        } else {
            cout << " - " << num << "^" << i << "/" << i << "!";
        }
    }

    cout << endl << "......................." << endl;

    for (int i = 3; i <= 7; i += 3) {
        int fact = fac(i);
        if (i % 3 == 0) {
            result += (pow(num, i)) / fact;
        } else {
            result -= (pow(num, i)) / fact;
        }
    }

    cout << fixed << setprecision(5) << "Result: " << result << endl;

    system("pause");
    return 0;
}

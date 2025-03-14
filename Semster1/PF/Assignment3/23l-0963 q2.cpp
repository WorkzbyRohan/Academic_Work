#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, c3 = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int x = 2; x <= n / 2; x++) {
        int y = n - x;
        if (isPrime(x) && isPrime(y)) {
            cout << n << " = " << x << " + " << y << endl;
            c3 = 1;
        }
    }

    if (c3 == 0) {
        cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}

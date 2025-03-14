#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter a value between 1 and 5: ";
    cin >> m;

    if (m > 5 || m < 1) {
        cout << "You entered an invalid number" << endl;
        return 0;
    }

    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    if (m == 1) {
        cout << "Calculating factorial of a number" << endl;
        int f = 1;
        for (int g = 1; g <= n; g++) {
            f *= g;
        }
        cout << "Factorial of " << n << " = " << f << endl;
    }

    if (m == 2) {
        cout << "Calculating number of permutations" << endl;
        int f1 = 1, f2 = 1;
        for (int i = 1; i <= n; i++) {
            f1 *= i;
        }
        for (int j = 1; j <= (n - r); j++) {
            f2 *= j;
        }
        int per = f1 / f2;
        cout << "Number of permutations = " << per << endl;
    }

    if (m == 3) {
        cout << "Calculating number of combinations" << endl;
        int f1 = 1, f2 = 1, f3 = 1;
        for (int i = 1; i <= n; i++) {
            f1 *= i;
        }
        for (int j = 1; j <= r; j++) {
            f2 *= j;
        }
        for (int k = 1; k <= (n - r); k++) {
            f3 *= k;
        }
        int comb = f1 / (f2 * f3);
        cout << "Number of combinations = " << comb << endl;
    }

    if (m == 4) {
        cout << "Calculating combinations using permutation method" << endl;
        int f1 = 1, f2 = 1, f3 = 1;
        for (int i = 1; i <= n; i++) {
            f1 *= i;
        }
        for (int j = 1; j <= (n - r); j++) {
            f2 *= j;
        }
        int per = f1 / f2;
        for (int l = 1; l <= r; l++) {
            f3 *= l;
        }
        int comb = per / f3;
        cout << "Number of combinations (using permutation) = " << comb << endl;
    }

    if (m == 5) {
        cout << "Program is closing" << endl;
        return 0;
    }

    return 0;
}

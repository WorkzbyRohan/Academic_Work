#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int p = (rand() % (100 - 10)) + 10;
    cout << "Size of pile = " << p;

    int t, m;
    t = (rand() % (1 - 0)) + 0;
    m = (rand() % (1 - 0)) + 0;

    if (t == 0) {
        cout << endl << "Human is playing";
    }
    if (t == 1) {
        cout << endl << "Computer is playing";
    }
    if (m == 0) {
        cout << endl << "Computer mode is stupid";
    }
    if (m == 1) {
        cout << endl << "Computer mode is smart";
    }

    while (p > 0) {
        int mar;
        if (t == 1 && m == 1) {
            int q = 1;
            while (q * 2 <= p) {
                q = q * 2;
            }
            mar = p - q + 1;
            cout << endl << "The marbles taken by computer = " << mar;
        }

        if (t == 1 && m == 0) {
            int h = p / 2;
            mar = (rand() % (h - 1)) + 1;
            h = 0;
            cout << "The marbles taken by computer = " << mar;
        }

        if (t == 0) {
            int x;
            cout << endl << "Enter the marbles = ";
            cin >> x;
            mar = x;
        }

        p = p - mar;
        t = 1 - t;
    }

    if (t == 0) {
        cout << endl << "You win";
    } else {
        cout << endl << "Computer wins";
    }

    return 0;
}

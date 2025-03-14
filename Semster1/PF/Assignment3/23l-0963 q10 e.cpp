#include<iostream>
using namespace std;

int main() {
    int N = 5;
    cout << "*" << endl;

    for (int i = 1; i <= N; i++) {
        cout << "*";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << "*" << endl;
    }

    for (int i = N - 1; i >= 1; i--) {
        cout << "*";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << "*" << endl;
    }

    cout << "*" << endl;
    return 0;
}

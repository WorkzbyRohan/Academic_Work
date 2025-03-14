#include<iostream>
using namespace std;

void fill(char a[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = ' ';
        }
    }
}

void print(char a[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}

void down(char f[][100], int a, int b, int c, int d) {
    for (int i = c + 1; i < a; i++) {
        f[i][d] = '|';
    }
}

void up(char f[][100], int a, int b, int c, int d) {
    for (int i = c - 1; i >= 0; i--) {
        f[i][d] = '|';
    }
}

void left(char f[][100], int a, int b, int c, int d) {
    for (int i = d - 1; i >= 0; i--) {
        f[c][i] = '-';
    }
}

void right(char f[][100], int a, int b, int c, int d) {
    for (int i = d + 1; i < b; i++) {
        f[c][i] = '-';
    }
}

void all(char f[][100], int a, int b, int c, int d) {
    right(f, a, b, c, d);
    left(f, a, b, c, d);
    up(f, a, b, c, d);
    down(f, a, b, c, d);
}

int main() {
    char ar[100][100];
    int x, y;

    cout << "Enter max x axis: ";
    cin >> x;
    cout << "Enter max y axis: ";
    cin >> y;

    fill(ar, y, x);

    // Draw borders
    for (int i = 0; i < x; i++) {
        ar[0][i] = '-';
        ar[y - 1][i] = '-';
    }
    for (int j = 0; j < y; j++) {
        ar[j][0] = '|';
        ar[j][x - 1] = '|';
    }

    // Center point
    int p = (y - 1) / 2; // Row (y-axis)
    int j = (x - 1) / 2; // Column (x-axis)
    ar[p][j] = 'X';

    print(ar, y, x);

    int choice;
    cout << "0: shot right \n1: shot left \n2: shot up \n3: shot down \n4: shot all directions\n";
    cin >> choice;

    switch (choice) {
        case 0: right(ar, y, x, p, j); break;
        case 1: left(ar, y, x, p, j); break;
        case 2: up(ar, y, x, p, j); break;
        case 3: down(ar, y, x, p, j); break;
        case 4: all(ar, y, x, p, j); break;
        default: cout << "Invalid choice!" << endl; return 0;
    }

    print(ar, y, x);

    return 0;
}

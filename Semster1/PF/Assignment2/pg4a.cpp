#include<iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int area = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));

    if (area == 0) {
        cout << "Points are collinear";
    } else {
        cout << "Points are non-collinear";
    }

    return 0;
}

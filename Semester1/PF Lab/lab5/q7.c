#include <iostream>
using namespace std;

int main() {
    int x, y, i = 1, sum;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << x << " , " << y << " ";

    while (i < 100) {
        sum = x + y;  
        cout << sum << " ";
        x = y;
        y = sum;
        i++;
    }

    return 0;
}

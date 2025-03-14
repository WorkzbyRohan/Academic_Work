#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int sum = 0, n, i = 1, y, result = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        y = pow(n, n); 
        sum += 1 / y;  
        i++;
    }

    result += sum;  
    cout << "Result: " << result << endl;
    return 0;
}

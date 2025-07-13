#include<iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3, d = 4, term;
    int sum = 0, sum1 = 0, sum2 = 0;

    for (int num = 4; num <= 50; num++) {
        int term1 = 0, term2 = 0;

        if (num % 2 == 0) {  // Fixed '=' to '=='
            term1 = a + c;
            cout << num << " term is " << term1 << endl;
            sum1 += term1;
            a = c;
        }

        if (num % 2 != 0) {
            term2 = b + d;
            cout << num << " term is " << term2 << endl;
            sum2 += term2;
            b = d;
            d = term1;
            c = term2;
        }
    }

    sum = 6 + sum1 + sum2;  
    cout << "Total Sum: " << sum << endl;

    return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main() {
    int h = 0;
    double l, a, y;
    srand(time(0));

    for (int i = 1; i <= 500; i++) {
        l = (double)rand() / RAND_MAX * 2;
        a = (double)rand() / RAND_MAX * 3.1416;
        y = l * sin(a);
        if (y >= 2) {
            h++;
        }
    }

    double p = 500.0 / h;
    cout << "Estimated value of p: " << p << endl;

    return 0;
}

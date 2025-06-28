#include <iostream>
using namespace std;

class ZeroException : public exception {
public:
    const char* what() const throw() {
        return "dividing a number by zero";
    }
    void xero() {
        cout << "Error: " << what() << endl;
    }
};

class Fraction {
    int num = 0;
    int den = 0;
public:
    Fraction(int a, int b) : num(a), den(b) {}
    void divide()
    {
        try {
            if (den <= 0)
                throw ZeroException();

            cout << "Result=" << num / den << endl;
        }
        catch (ZeroException e)
        {
            e.xero();
        }
    }
};

int main()
{
    Fraction f1(25, 5);
    f1.divide();
    Fraction f2(12, 0);
    f2.divide();

}
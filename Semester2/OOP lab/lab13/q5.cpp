#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T values[2];

public:
    Pair() : values{ 0, 0 } {}


    Pair(T first, T second) : values{ first, second } {}


    T GetMax() {
        if (values[0] > values[1])
            return values[0];
        else
            return values[1];
    }


    T GetMin();

    template <class identifier>
    friend ostream& operator<<(ostream& out, const Pair<identifier>& p);
};


template <class T>
T Pair<T>::GetMin() {
    if (values[0] > values[1])
        return values[1];
    else
        return values[0];
}


template <class T>
ostream& operator<<(ostream& out, const Pair<T>& p) {
    out << "(" << p.values[0] << ", " << p.values[1] << ")";
    return out;
}


template <class T, int N>
class Sequence {
private:
    T memblock[N];

public:

    void setmember(int x, T value);


    T getmember(int x);
};

template <class T, int N>
void Sequence<T, N>::setmember(int x, T value) {
    if (x >= 0 && x < N) {
        memblock[x] = value;
    }

}


template <class T, int N>
T Sequence<T, N>::getmember(int x) {
    if (x >= 0 && x < N) {
        return memblock[x];
    }

}

int main() {
    Pair<double> y(2.23, 3.45);
    Sequence<Pair<double>, 5> myPairs;
    myPairs.setmember(0, y);
    cout << myPairs.getmember(0) << '\n';
    return 0;
}
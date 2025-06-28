//
//
//#include <iostream>
//using namespace std;
//
//template <class T, int N>
//class Sequence {
//private:
//    T memblock[N];
//
//public:
// 
//    void setmember(int x, T value);
//
//
//    T getmember(int x);
//};
//
//
//template <class T, int N>
//void Sequence<T, N>::setmember(int x, T value) {
//    if (x >= 0 && x < N) {
//        memblock[x] = value;
//    }
//
//}
//
//
//template <class T, int N>
//T Sequence<T, N>::getmember(int x) {
//    if (x >= 0 && x < N) {
//        return memblock[x];
//    }
//
//}
//
//int main() {
//    Sequence<int, 5> myints;
//    Sequence<double, 5> myfloats;
//    myints.setmember(0, 100);
//    myfloats.setmember(3, 3.1416);
//    cout << myints.getmember(0) << '\n';
//    cout << myfloats.getmember(3) << '\n';
//    return 0;
//}
//
//

//#include <iostream>
//using namespace std;
//
//template <class T>
//class Pair {
//private:
//    T values[2];
//
//public:
//    Pair(T first, T second) {
//        values[0] = first;
//        values[1] = second;
//    }
//
//    T GetMax() 
//    {
//        if (values[0] > values[1])
//            return values[0];
//        else
//            return values[1];
//    }
//
//    T GetMin();
//};
//
//template <class T>
//T Pair<T>::GetMin() 
//{
//    if (values[0] > values[1])
//        return values[1];
//    else
//        return values[0];
//}
//int main() {
//    Pair<double> myobject(1.012, 1.01234);
//    cout << myobject.GetMax();
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//    char name[50];
//public:
//    Student(const char* n)
//    {
//        strcpy_s(name, n);
//
//    }
//
//    void Print() const
//    {
//        cout << name;
//    }
//};
//
//class Society {
//private:
//    char name[50];
//    Student* president;
//    Student* members[5];
//public:
//    Society(const char* n) {
//        strcpy_s(name, n);
//
//
//        president = nullptr;
//        for (int i = 0; i < 5; ++i) {
//            members[i] = nullptr;
//        }
//    }
//
//    void PrintInfo() const {
//        cout << "Society Name: " << name << endl;
//        cout << "President: ";
//        if (president) {
//            president->Print();
//        }
//        else {
//            cout << "Not Available";
//        }
//        cout << endl;
//        for (int i = 0; i < 5; ++i) {
//            cout << "Member " << (i + 1) << ": ";
//            if (members[i]) {
//                members[i]->Print();
//            }
//            else {
//                cout << "Not Available";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Society sports("Sports");
//    sports.PrintInfo();
//    return 0;
//}

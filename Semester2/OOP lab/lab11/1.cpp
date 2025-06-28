//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//class employee {
//private:
//    char name[50];
//    char id[50];
//
//public:
//    employee() {
//        cout << "constructor has been called for base class\n";
//        strcpy(name, " ");
//        strcpy(id, " ");
//    }
//
//    ~employee() {
//        cout << "destructor has been called for base class" << endl;
//    }
//
//    employee(char* empname, char* nic) {
//        strcpy(name, empname);
//        strcpy(id, nic);
//    }
//
//    void setvalues(char* empname, char* nic) {
//        strcpy(name, empname);
//        strcpy(id, nic);
//    }
//
//    void print() {
//        cout << endl << "Name: " << name;
//        cout << endl << "Id: " << id << endl;
//    }
//};
//class manager :public employee
//{
//    int salary;
//public:
//    manager()
//    {
//        salary = 0;
//    }
//    manager(char* empname, char* id, int s) :employee(empname, id)
//    {
//        salary = s;
//    }
//    void  print()
//    {
//        cout << endl << "Manager Details";
//        employee::print();
//        cout << "Salary=" << salary << "$" << endl;
//    }
//
//
//
//
//};
//class developer :public employee
//{
//    int salary;
//public:
//    developer()
//    {
//        salary = 0;
//    }
//    developer(char* empname, char* id, int s) :employee(empname, id)
//    {
//        salary = s;
//    }
//    void  print()
//    {
//        cout << endl << "Developer Details";
//        employee::print();
//        cout << "Salary=" << salary << "$" << endl;
//    }
//
//
//
//
//};
//int main() {
//
//    manager m1("rohan", "B963", 5000);
//    m1.print();
//    developer d1("faiq", "C905", 8000);
//    d1.print();
//}

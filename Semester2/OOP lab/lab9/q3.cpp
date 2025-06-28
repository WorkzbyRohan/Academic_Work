#include <iostream>
#include <cstring>

class Address {
private:
    char* address;
public:
    Address(const char* addr) {
        address = new char[strlen(addr) + 1];
        strcpy_s(address, strlen(addr) + 1, addr);
    }

    ~Address() {
        delete[] address;
    }

    const char* getAddress() const {
        return address;
    }

    void setAddress(const char* addr) {
        delete[] address;
        address = new char[strlen(addr) + 1];
        strcpy_s(address, strlen(addr) + 1, addr);
    }

    void print() const {
        std::cout << address << std::endl;
    }
};

class Student {
private:
    int rollNo;
    char* name;
    Address* address;
public:
    Student(int roll, const char* n, const char* addr) : rollNo(roll) {
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
        address = new Address(addr);
    }

    ~Student() {
        delete[] name;
        delete address;
    }

    const char* getName() const {
        return name;
    }

    void setName(const char* n) {
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }

    int getRollNo() const {
        return rollNo;
    }

    void setRollNo(int roll) {
        rollNo = roll;
    }

    Address* getAddress() const {
        return address;
    }

    void setAddress(const char* addr) {
        address->setAddress(addr);
    }

    void print() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << rollNo << std::endl;
        std::cout << "Address: ";
        address->print();
    }
};

int main() {
    Student s(1, "John Doe", "123 Main St");
    s.print();

    return 0;
}

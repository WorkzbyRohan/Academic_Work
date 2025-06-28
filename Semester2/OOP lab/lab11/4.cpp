#include<iostream>
#include<string>

using namespace std;

class Account {
public:
    Account(string name, double balance) : name(name), balance(balance) {}
    virtual void display() = 0;
protected:
    string name;
    double balance;
};

class SavingsAccount : public Account {
public:
    SavingsAccount(string name, double balance, double interestRate) : Account(name, balance), interestRate(interestRate) {}
    void display() override {
        cout << "Savings Account\n";
        cout << "Name: " << name << "\n";
        cout << "Balance: " << balance << "\n";
        cout << "Interest Rate: " << interestRate << "\n";
    }
private:
    double interestRate;
};

class CheckingAccount : public Account {
public:
    CheckingAccount(string name, double balance, int numberOfChecks) : Account(name, balance), numberOfChecks(numberOfChecks) {}
    void display() override {
        cout << "Checking Account\n";
        cout << "Name: " << name << "\n";
        cout << "Balance: " << balance << "\n";
        cout << "Number of Checks: " << numberOfChecks << "\n";
    }
private:
    int numberOfChecks;
};

int main() {
    Account* accounts[2];
    accounts[0] = new SavingsAccount("Alice", 5000.0, 0.02);
    accounts[1] = new CheckingAccount("Bob", 2000.0, 100);

    for (int i = 0; i < 2; i++) {
        accounts[i]->display();
        cout << "\n";
    }

    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }

    return 0;
}
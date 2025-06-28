//#include <iostream>
//using namespace std;
//
//class Account {
//protected:
//    int accountId;
//    string accountType;
//    double balance;
//    double interestRate;
//
//public:
//    Account(int id, string type, double initialBalance, double rate)
//        : accountId(id), accountType(type), balance(initialBalance), interestRate(rate) {
//        cout << "Acoount() called\n";
//    }
//
//    void setAttributes(int id, string type, double initialBalance, double rate) {
//        accountId = id;
//        accountType = type;
//        balance = initialBalance;
//        interestRate = rate;
//    }
//
//    void getAttributes() {
//        cout << "Account ID: " << accountId << endl;
//        cout << "Account Type: " << accountType << endl;
//        cout << "Balance: $" << balance << endl;
//        cout << "Interest Rate: " << interestRate << "%" << endl;
//    }
//
//    void deposit(double amount) {
//        balance += amount;
//    }
//
//    void withdraw(double amount) {
//        if (balance >= amount) {
//            balance -= amount;
//        }
//        else {
//            cout << "Insufficient funds." << endl;
//        }
//    }
//
//
//
//    ~Account() {
//        cout << "~Accout() called\n";
//    }
//};
//
//class SavingsAccount : public Account {
//private:
//    double minimumBalance;
//
//public:
//    SavingsAccount(int id, double initialBalance, double rate, double minBalance)
//        : Account(id, "Savings", initialBalance, rate), minimumBalance(minBalance) {
//        cout << "Saving account called\n";
//    }
//
//    void withdraw(double amount) {
//        if (balance - amount >= minimumBalance) {
//            balance -= amount;
//        }
//        else {
//            cout << "Withdrawal not allowed due to minimum balance requirement." << endl;
//        }
//    }
//
//    ~SavingsAccount()
//    {
//        cout << "~SavingsAcoount called\n";
//    }
//
//};
//
//class CheckingAccount : public Account {
//private:
//    double overdraftLimit;
//
//public:
//    CheckingAccount(int id, double initialBalance, double rate, double limit)
//        : Account(id, "Checking", initialBalance, rate), overdraftLimit(limit)
//    {
//        cout << "checkin acoount called \n";
//    }
//
//    void withdraw(double amount)
//    {
//        if (balance - amount >= -overdraftLimit)
//        {
//            balance -= amount;
//        }
//        else
//        {
//            cout << "Withdrawal not allowed due to overdraft limit." << endl;
//        }
//    }
//
//    ~CheckingAccount()
//    {
//        cout << " Checking destructor called\n";
//    }
//};
//
//class FixedDepositAccount : public Account {
//private:
//    int termLength;
//
//public:
//    FixedDepositAccount(int id, double initialBalance, double rate, int term)
//        : Account(id, "Fixed Deposit", initialBalance, rate), termLength(term)
//    {
//        cout << "Fixd account called\n";
//    }
//
//    void withdraw(double amount)
//    {
//        cout << "Withdrawal not allowed for fixed deposit accounts before the term ends." << endl;
//    }
//    ~FixedDepositAccount()
//    {
//        cout << "Fixed destructor called \n";
//    }
//};
//
//
//
//int main() {
// {
//    SavingsAccount savings(1001, 1000.0, 2.5, 500.0);
//    savings.getAttributes();
//    savings.deposit(200.0);
//    savings.withdraw(300.0);
// }
// cout << "------------------------------------------------------------------------------------------------------------\n";
// {
//     CheckingAccount checking(2001, 1500.0, 1.5, 500.0);
//     checking.getAttributes();
//     checking.deposit(200.0);
//     checking.withdraw(1800.0);
//     checking.withdraw(2000.0);
// }
// cout <<"-------------------------------------------------------------------------------------------------------------\n";
// {
//     FixedDepositAccount fixedDeposit(3001, 5000.0, 3.0, 12);
//     fixedDeposit.getAttributes();
//     fixedDeposit.withdraw(1000.0);
// }
//
//    return 0;
//}

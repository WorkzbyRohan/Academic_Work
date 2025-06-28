//#include<iostream>
//#include<cstring>
//using namespace std;
//
////-----------------------------------------------------------------------------------------
////Employee Class
////-----------------------------------------------------------------------------------------
//class Employee
//{
//private:
//	char name[50];
//	char cnic[20];
//public:
//	Employee();
//	Employee(char*, char*);
//	void PrintInfo();
//	void SetValues(char*, char*);
//	char* GetName();
//	~Employee();
//};
//char* Employee::GetName()
//{
//	return name;
//}
//Employee::Employee()
//{
//	cout << "Employee Default Constructor Called\n";
//	strcpy(name, "");
//	strcpy(cnic, "");
//}
//Employee::Employee(char* empName, char* nic)
//{
//	strcpy(name, empName);
//	strcpy(cnic, nic);
//	cout << "Employee Overloaded Constructor Called for " << name << endl;
//}
//Employee::~Employee()
//{
//	cout << "Employee Destructor Called for " << name << endl;
//}
//
//void Employee::PrintInfo()
//{
//	//cout << "Name:\t" << name << endl;
//	//cout << "CNIC:\t" << cnic << endl;	
//
//	cout << name << " < " << cnic << " > " << endl;
//}
//void Employee::SetValues(char* empName, char* nic)
//{
//	strcpy(name, empName);
//	strcpy(cnic, nic);
//}
////-----------------------------------------------------------------------------------------
////HourlyWorker Class
////-----------------------------------------------------------------------------------------
//class HourlyWorker : public Employee	//Member Access Specifier is Public. This is Public Inheritance... by default inheritance in private.
//{
//private:
//	int workingHours;
//	int wagePerHour;
//public:
//	HourlyWorker();
//	HourlyWorker(char*, char*, int, int);
//	void SetValues(char*, char*, int, int);	//This is function Overloading not Overriding as parameters list is different from Base Class' SetValues
//	~HourlyWorker();
//	void PrintInfo();	//This is function overriding as name and function parameters are same as that of base class
//	int CalculatePay();	//HourlyWorker (child) Specific Function
//};
//int HourlyWorker::CalculatePay()
//{
//	return workingHours * wagePerHour;
//}
//void HourlyWorker::PrintInfo()
//{
//	//PrintInfo();//This is recursive call i.e. function calling itself.
//	Employee::PrintInfo();	//We need to call parent's PrintInfo	
//	cout << "Total Working Hours :\t" << workingHours << endl;
//	cout << "Wage per Hour :\t" << wagePerHour << endl;
//	cout << "Total Payment:\t" << CalculatePay() << endl;
//}
//HourlyWorker::HourlyWorker()
//{
//	cout << "HourlyWorker Default Constructor Called\n";
//	workingHours = wagePerHour = 0;
//}
//HourlyWorker::~HourlyWorker()
//{
//	cout << "HourlyWorker Destructor Called for " << GetName() << endl;
//}
//HourlyWorker::HourlyWorker(char* empName, char* nic, int workHrs, int wPh) :Employee(empName, nic)//Member's Initializer List
//{
//	cout << "HourlyWorker Overloaded Constructor Called.\n";
//	workingHours = workHrs;
//	wagePerHour = wPh;
//}
//void HourlyWorker::SetValues(char* empName, char* nic, int workHrs, int wPh)
//{
//	Employee::SetValues(empName, nic);
//	workingHours = workHrs;
//	wagePerHour = wPh;
//}
//
//class SalariedEmployee : public Employee
//{
//private:
//	int salary;
//public:
//	SalariedEmployee();
//	SalariedEmployee(char*, char*, int);
//	void SetValues(char*, char*, int);
//	~SalariedEmployee();
//	void PrintInfo();
//};
//SalariedEmployee::SalariedEmployee()
//{
//	cout << "SalariedEmployee Default Constructor Called\n";
//	salary = 0;
//}
//SalariedEmployee::SalariedEmployee(char* empName, char* nic, int income) :Employee(empName, nic)
//{
//	cout << "SalariedEmployee Overloaded Constructor Called.\n";
//	salary = income;
//}
//void SalariedEmployee::SetValues(char* empName, char* nic, int income)
//{
//	Employee::SetValues(empName, nic);
//	salary = income;
//}
//SalariedEmployee::~SalariedEmployee()
//{
//	cout << "SalariedEmployee Destructor Called for " << GetName() << endl;
//}
//void SalariedEmployee::PrintInfo()
//{
//	Employee::PrintInfo();
//	cout << "Total Payment:\t" << salary << endl;
//}
//int main()
//{
//	SalariedEmployee e1("rohan", "9987", 6000);
//	e1.PrintInfo();
//	HourlyWorker h1("bilal", "9098", 8, 500);
//	h1.PrintInfo();
//
//
//
//}
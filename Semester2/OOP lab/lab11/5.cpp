//#include<iostream>
//using namespace std;
//class vehicle
//{
//protected:
//	int number;
//	char model[50];
//	char enginetype[50];
//public:
//	vehicle()
//	{
//		number = 0;
//		strcpy(model, " ");
//		strcpy(enginetype, " ");
//	}
//	vehicle(int s, char* m1, char* e1)
//	{
//		number = s;
//		strcpy(model, m1);
//		strcpy(enginetype, e1);
//    }
//	void print()
//	{
//		cout << "Number plate:" << number<<endl;
//		cout << "Model Name:" << model << endl;
//		cout << "Engine Type:" << enginetype << endl;
//	}
//
//
//};
//class car:public vehicle
//{
//private:
//	char name[50];
//public:
//	car()
//	{
//		strcpy(name, " ");
//	
//	}
//	car(char* n1, int n, char* m1, char* e1) :vehicle(n, m1, e1)
//	{
//		strcpy(name, n1);
//
//	}
//	void print()
//	{
//		cout << "Car Details:" << endl;
//		cout << "Car Name:" << name << endl;
//	vehicle:print();
//	
//	}
//
//
//
//
//
//
//};
//class motorcycle :public vehicle
//{
//private:
//	char name[50];
//public:
//	motorcycle()
//	{
//		strcpy(name, " ");
//
//	}
//	motorcycle(char* n1, int n, char* m1, char* e1) :vehicle(n, m1, e1)
//	{
//		strcpy(name, n1);
//
//	}
//	void print()
//	{
//		cout << "Motorcycle Details:" << endl;
//		cout << "Motorcycle Name:" << name << endl;
//	vehicle:print();
//
//	}
//
//
//
//
//
//
//};
//int main()
//{
//
//	motorcycle m2("honda70", 456, "lev2023", " aV3");
//	m2.print();
//	car c1("Auddii", 787, "rem7890", "Y56");
//	c1.print();
//
//
//
//
//
//}
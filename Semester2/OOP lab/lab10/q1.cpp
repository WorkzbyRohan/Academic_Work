#include<iostream>
#include<string>
using namespace std;
class College
{
private:
	string firstname;
	string lastname;
protected:
		int age;
public:
	College()
	{
		cout << " class constructor has called" << endl;
		
		age = 0;

     }
	void setfname( string a)
	{
		cout << "enter your first name" << endl;
		cin >> a;
		firstname = a;
	}
	void setlname(string b)

	{
		cout << "enter your last name" << endl;
		cin >> b;
		lastname = b;
	}
	
	string getlname()
	{
		return lastname;

	}
	string getfname()
	{
		return firstname;
	}
	void print()
	{
		cout << "first name:" << firstname<<endl;
		cout << "last name:" << lastname << endl;
		cout << "age=" << age << endl;

	}
	void setage(int c)
	{
		cout << "enter your age="<<endl;
		cin >> c;
		age = c;
	}
	int getage()
	{
		return age;
	}
	~College()
	{
		cout << "destructor  has called" << endl;
		
	}




};
class student:public College
{
	private:
	float gpa;
public:
	student()
	{
		
		setfname("0");
		setlname("0");
		setage(0);
		getfname();
		getlname();
		gpa = 0;
	}
	void setgpa(float b)
	{
		cout << "enter your cpa"<<endl;
		cin >> b;
		gpa = b;
	}
	float getgpa()
	{
		return gpa;
	}
	void print()
	{
		
		College::print();
		cout << "student gpa =" << gpa<<endl;
	}


};
class gstudent :public student
{
	string fypname;
public:
	gstudent()
	{
		cout << "graduate stdent called" << endl;
		setgpa(0);
		fypname = "0";


	}
	void setfypname(string a)
	{
		cout << "enter your fyp name"<<endl;
		cin >> a;
		fypname = a;
	}
	void print()
	{
		cout << endl << "graduate student details" << endl;
		student::print();
		cout << "fypname=" << fypname<<endl;


	}
	~gstudent()
	{
		cout << "destructor for undergraduate called" << endl;
	}


};
class ustudent :public student
{
	string thesisname;
public:
	ustudent()
	{
		cout << "undergraduate stdent called" << endl;
		setgpa(0);
		thesisname = "0";


	}
	void setthesisname(string a)
	{
		cout << "enter your thesis name" << endl;
		cin >> a;
		thesisname = a;
	}
	void print()
	{
		cout << endl << "undergraduate student details" << endl;
		student::print();
		cout << "fypname=" << thesisname << endl;


	}
	~ustudent()
	{
		cout << "destructor for undergraduate called" << endl;
	}




};
class faculty :public College
{
private:
	int cc;
	int et;
public:
	faculty()
	{
		cout << "faculty called" << endl;
		setfname("0");
		setlname("0");
		setage(0);
		cc = 0;
		et = 0;

	}
	void setcoursecount(int c)
	{
		cout << "enter the no of course you are teaching=";
			cin >> c;
		cc = c;
	}
	void setextension(int c)
	{
		cout << "enter the 3 digit extension=";
		cin >> c;
		et = c;
	}
	void print()
	{
		cout << endl << "faculty details" << endl;
		College::print();
		cout << "no of courses teachng=" << cc<<endl;
		cout << "3 digit extenson number=" << et << endl;

	}

	~faculty()
	{
		cout << "destructor for faculty called" << endl;
	}





};

int main()
{
	int n;
	cout << "enter 1 for graduate,2 for undergraduate and 3 for faculty to detail details=";
	cin >> n;
	cout << endl;

	if (n == 1)
	{
		gstudent u1;
		u1.setfypname("0");
		u1.print();
	}
	if (n == 2) 
	{
		ustudent g1;
		g1.setthesisname("0");
		g1.print();
	}
	if (n == 3)
	{
		faculty f1;
		f1.setcoursecount(0);
		f1.setextension(0);
		f1.print();
	}
}
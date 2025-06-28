#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
private:
	string name;
	int id;

	float price;
public:
	void setname(string);
	void getname();
	void setid(int);
	void getid();

	void setprice(float);
	void getprice();
	bankaccount(string, int, float);
	bankaccount(const bankaccount& other);
};
void bankaccount::setname(string a)
{
	name = a;

}
void bankaccount::setid(int b)
{
	id = b;

}

void bankaccount::setprice(float d)
{
	price = d;

}
void bankaccount::getname()
{
	cout << "AccountHolder name=" << name << endl;
}
void bankaccount::getid()
{
	cout << "Account id=" << id << endl;
}

void bankaccount::getprice()
{
	cout << " Balance=" << price <<"$" <<endl;
}
bankaccount::bankaccount(string e, int f, float h)
{
	price = h;
	id = f;
	name = e;

}
bankaccount::bankaccount(const bankaccount& other)
{
	name = other.name;
	id = other.id;
	price = other.price;
}
int main()
{
	bankaccount s1("Rohan", 63, 38.17);

	s1.getname();
	s1.getid();

	s1.getprice();
	int a;
	char b;
	string c;
	float d;
	cout << "enter your name=";
	getline(cin, c);
	s1.setname(c);
	cout << endl << "enter your id=";
	cin >> a;
	s1.setid(a);
	
	cout << endl << "enter your balance=";
	cin >> d;
	s1.setprice(d);

	bankaccount s2 = s1;
	cout << "\nvalues are \n";

	s2.getname();
	s2.getid();

	s2.getprice();





}
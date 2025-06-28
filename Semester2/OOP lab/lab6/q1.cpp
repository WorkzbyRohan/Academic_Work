#include<iostream>
using namespace std;
class Stringinfo
{
public:
	Stringinfo(char* string);
	~Stringinfo();
	char* getstring();
	void calculate();
	void setstring(char* string);

private:
	char* str;
	int length;
};

void Stringinfo::calculate() {
	length = 0;
	for (; str[length] != '\0'; length++) {}
	cout << "Length of the given string is : " << length;
}

Stringinfo::Stringinfo(char* string = nullptr)
{
	//string = nullptr;
	str = string;
	length = 0;
}

Stringinfo::~Stringinfo()
{
	cout << this << "CLASS HAS BEEN DESTRUCTED " << endl;
	delete str;
}

char* Stringinfo::getstring() {
	char* str1 = new char[200];
	cout << endl << "ENTER THE STRING " << endl;
	cin.getline(str1, 200);
	return str1;
}
void Stringinfo::setstring(char* temp) {
	str = temp;
}


int main() {
	Stringinfo s1;
	char* temp = nullptr;
	temp = s1.getstring();
	s1.setstring(temp);
	s1.calculate();
	cout << endl;

}

#include<iostream>
using namespace std;
class holder
{
private:
	char* str;
	int l;
public:
	char* getstring();
	void length();
	void setstring(char*);
	holder(char* string);
	~holder();
	void shallowcopy(char*);
	void deepcopy(char*);
};
holder::holder(char* string = nullptr)
{
	//string = nullptr;
	str = string;
	l= 0;
}
holder::~holder()
{
	cout << this << "CLASS HAS BEEN DESTRUCTED " << endl;
	delete str;
}
void holder::length() {
	l = 0;
	for (; str[l] != '\0'; l++) {}
	cout << "Length of the given string is : " << l;
}
char* holder::getstring() {
	char* str1 = new char[200];
	cout << endl << "ENTER THE STRING " << endl;
	cin.getline(str1, 200);
	return str1;
}
void holder::setstring(char* temp) 
{
	str = temp;
}
void holder::shallowcopy(char*a)
{
	char* temp1;
	temp1 = new char[100];
	cout <<endl <<"shalow copy"<<endl;
	for(int i=0;a[i]!='\0';i++)
	{
		temp1[i] = a[i];
		cout << temp1[i];
	}
	
}
void holder::deepcopy(char* a)
{

	char* temp1;
	temp1 = new char[100];
	cout <<endl<< "deep copy copy" << endl;
	for (int i = 0; a[i] != '\0'; i++)
	{
		temp1[i] = a[i];
		cout << temp1[i];
	}



}
int main()
{


	holder s1;
	char* temp = nullptr;
	temp = s1.getstring();
	s1.setstring(temp);
	s1.length();
	s1.shallowcopy(temp);
	s1.deepcopy(temp);

	cout << endl;





}
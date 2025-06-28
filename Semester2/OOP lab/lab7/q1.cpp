//#include<iostream>
//using namespace std;
//class complex
//{
//	friend ostream& operator<<(ostream&, const complex&);
//	friend istream& operator>>(istream&, complex&);
//
//private:
//	int real;
//	int imag;
//public:
//	complex();
//	complex operator+(complex&);
//	complex operator-(complex&);
//	complex operator*(complex&);
//
//
//
//
//};
//complex::complex()
//{
//	real = 0;
//	imag = 0;
//
//}
//complex complex::operator+(complex& obj)
//{
//	complex temp;
//	temp.real = real + obj.real;
//	temp.imag = imag + obj.imag;
//
//	return temp;
//
//}
//complex complex::operator-(complex& obj)
//{
//	complex temp;
//	temp.real = real - obj.real;
//	temp.imag = imag - obj.imag;
//
//	return temp;
//
//}
//complex complex::operator*(complex& obj)
//{
//	complex temp;
//	temp.real = (real * obj.real) - (imag * obj.imag);
//	temp.imag = (real * obj.imag) + (imag * obj.real);
//	return temp;
//}
//ostream& operator<<(ostream& cout, const complex& obj)
//{
//	cout <<endl<< obj.real;
//	if (obj.imag > 0)
//		cout << "+";
//	cout << obj.imag << "i";
//	return cout;
//}
//istream& operator>>(istream&cin, complex&obj)
//{
//	cout<< endl<< "enter real part=";
//		cin >> obj.real;
//		cout << endl << "enter imginary part=";
//		cin >> obj.imag;
//		return cin;
//
//
//}
//int main()
//{
//	complex c1, c2, c3;
//	cout <<"enter the real and imaginary part one by one"<<endl;
//	cin >> c1 >> c2 >> c3;
//	cout << "number 1="<<c1<<endl<<"number 2=" << c2 <<endl<<"number 3=" << c3;
//	cout <<endl<< "sum of  two number=";
//	
//	cout << c1+c2;
//	cout << endl << "minus of  two number=";
//
//	cout << c1 - c2;
//	cout << endl << "multiplication of  two number=";
//
//	cout << c1*c2;
//
//
//
//}
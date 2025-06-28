//#include<iostream>
//using namespace std;
//class distance1
//{
//	friend ostream& operator<<(ostream&, const distance1&);
//	friend istream& operator>>(istream&, distance1&);
//private:
//	int dis;
//public:
//	distance1()
//	{
//		dis = 0;
//	}
//	int operator<(distance1&obj)
//	{
//		if (dis < obj.dis)
//		{
//			return 1;
//		}
//		else 
//		{
//			return 0;
//		}
//	}
//	int operator>(distance1& obj)
//	{
//		if (dis > obj.dis)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int operator<=(distance1& obj)
//	{
//		if (dis <=obj.dis )
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int operator>=(distance1& obj)
//	{
//		if (dis >= obj.dis)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int  operator+=(int a)
//	{
//		dis = dis + a;
//		return dis;
//	}
//	int  operator-=(int a)
//	{
//		dis = dis - a;
//		return dis;
//	}
//
//
//
//
//
//
//};
//ostream& operator<<(ostream&cout, const distance1&obj)
//{
//	cout << "distance=" <<obj. dis;
//	return cout;
//
//}
//istream& operator>>(istream&cin, distance1&obj)
//{
//	cout << endl << "enter distance=";
//	cin >> obj.dis;
//	return cin;
//}
//int main()
//{
//	distance1 d1, d2;
//	cin >> d1 >> d2;
//	cout << d1 << d2;
//	if (d1 > d2)
//	{
//		cout << "d1 is greater";
//	}
//	else {
//		cout << "d2 is greater";
//	}
//	if(d1<d2)
//	{
//		cout << endl<<"d2 is smaller";
//	}
//	else
//	{
//		cout <<endl<< "d1 is smaller";
//	}
//	if (d1 >= d2)
//	{
//		cout << endl << "either d1 is greater or equal";
//	}
//	else{
//		cout << endl << "either d2 is greater or equal";
//	}
//	if (d1 <= d2)
//	{
//		cout << endl << "either d1 is lesser or equal";
//	}
//	else {
//		cout << endl << "either d2 is lesser or equal";
//	}
//	int a;
//	cout << endl << "enter a number to add=";
//	cin >> a;
//	d1 += a;
//	int b;
//	cout << endl << "enter a number to minus=";
//	cin >> b;
//	cout << endl << d1;
//	d2-=b;
//	cout << endl << d2;
//}

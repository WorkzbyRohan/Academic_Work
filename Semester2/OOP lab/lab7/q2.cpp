//#include<iostream>
//using namespace std;
//class timeon
//{
//	friend ostream& operator<<(ostream&, const timeon&);
//	friend istream& operator>>(istream&, timeon&);
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	timeon();
//	
//	timeon operator+(timeon&);
//	timeon operator-(timeon&);
//	bool operator==(timeon&);
//	bool operator!=(timeon&);
//	void operator++();
//	void operator--();
//
//
//
//
//
//
//};
//void timeon::operator--()
//{
//	sec = sec - 1;
//	if (sec <= 0)
//	{
//		sec = 0;
//		min = min - 1;
//		if (min <= 0)
//		{
//			min = 0;
//			hour = hour - 1;
//			if (hour <= 0)
//			{
//				hour = 0;
//			}
//		}
//	}
//
//
//
//
//
//}
//bool timeon:: operator!=(timeon& obj)
//{
//
//
//	if (this->hour != obj.hour && min != obj.min && sec != obj.sec)
//	{
//
//
//		return 1;
//
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//timeon operator+(timeon& obj)
// {
// timeon temp;
// if (this->hour + obj.hour <= 24)
// temp.hour = this->hours + obj.hour;
// else
// cout << "hours cvnt be added";
// int temp1 = this->min + obj.min;
// if (temp1 < 60)
// temp.mins = this->min + obj.min;
// else
// {
// int temp2 = temp1 - 60;
// temp.mins = temp2;
// if (this->hour + obj.hour <= 24)
// temp.hour++;
// else {
// cout << "mins cant be added";
// return 0;
// }
//
// }
//
// temp1 = this->secs + obj.sec;
// if (temp1 < 60)
// temp.sec = temp1;
// else
// {
//timeon timeon ::operator-(timeon& obj)
// {
// timeon temp;
// if (this->hour -  obj.hour >= 0)
// temp.hour = this->hour - obj.hour;
// else
// cout << "hours cvnt be subtracted\n";
//
// if (this->min - obj.min >= 0)
// temp.min = this->min - obj.min;
// else
// cout << "mins cant be subtracted\n";
//
// if (this->sec - obj.sec >= 0)
// temp.sec= this->sec - obj.sec;
// else
// cout << "secs cant be subtracted\n";
//
// return temp;
// }
//
//bool timeon::operator==(timeon& obj)
//{
//	if ( this->hour == obj.hour && min == obj.min && sec == obj.sec)
//	{
//		
//		
//			return 1;
//		
//	}
//	else
//	{
//		return 0;
//	}
//
//
//}
//
//timeon::timeon()
//{
//	hour = 0;
//	min = 0;
//	sec = 0;
//
//
//}
//ostream& operator<<(ostream&cout, const timeon& obj)
//{
//	cout << endl<<"time is=" << obj.hour << ":" << obj.min << ":" << obj.sec;
//	return cout;
//}
//istream& operator>>(istream&, timeon& obj)
//{
//	cout <<endl<< "enter hour=";
//	cin >> obj.hour;
//	cout <<endl<< "enter minutes=";
//	cin >> obj.min;
//	cout <<endl<< "enter secomds=";
//	cin >> obj.sec;
//	return cin;
//
//
// }
//int main()
//{
//	timeon c1, c2;
//	cin >> c1 >> c2;
//	cout << c1 << c2;
//	cout <<endl<< "add=" << c1 + c2;
//	if (c1 == c2)
//	{
//		cout << endl<<"time is same";
//	}
//	if(c1!= c2)
//	{
//		cout << endl << "time is not same";
//	
//	}
//	++c1;
//	cout << endl << "after increament";
//	cout << c1;
//	--c2;
//	cout << endl << "after decreament=";
//	cout <<c2;
//}
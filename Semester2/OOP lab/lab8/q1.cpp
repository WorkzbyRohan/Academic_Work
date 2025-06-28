//#include<iostream>
//using namespace std;
//class engine
//{
//private:
//	int hp;
//	string type;
//public:
//	engine()
//	{
//		hp = 0;
//		type = "0";
//		
//     }
//	engine(int& a, string &c)
//	{
//		cout << endl << "enter the horsepower of engine=";
//		cin >> a;
//		hp = a;
//		cout << endl << "enter the type of engine=";
//		cin >> c;
//		type = c;
//
//	}
//	void sethp(int a)
//	{
//		cout <<endl<< "enter the horsepower of engine=";
//		cin >> a;
//		hp = a;
//	}
//	int gethp()
//	{
//	  return hp;
//	}
//	void settype(string a)
//	{
//		cout << endl << "enter the type of engine=";
//		cin >> a;
//		type = a;
//	}
//	string gettype()
//	{
//		return type;
//	}
//	void print()
//	{
//		cout << endl << "having  " << hp << " hosepower and  "
//			<< type << " " <<"type  engine ";
//	}
//};
//class car
//{
//private:
//	 string model;
//	 int y;
//	 engine horse;
//	 
//public:
//	car()
//	{ 
//		y = 0;
//		model = "0";
//	
//		
//	}
//
//	void setmodel(string b)
//	{
//
//		cout << endl << "enter the model of car=";
//		cin >> b;
//		model = b;
//		
//
//	}
//	string getmodel()
//	{
//		return model;
//	}
//	void sety(int a)
//	{
//		cout << endl << "enter the year of car=";
//		cin >> a;
//		y = a;
//	}
//	int gety()
//	{
//		return y;
//
//	}
//	void setengine()
//	{
//		horse.sethp(0);
//		horse.settype("0");
//
//	}
//	void print()
//	{
//
//
//		cout << "car has model " << model << " and the year is " << y;
//		horse.print();
//
//	}
//		
//};
//	int main()
//	{
//
//		car c1;
//		c1.setmodel("0");
//		c1.getmodel();
//		c1.sety(0);
//		c1.gety();
//		c1.setengine();
//		c1.print();
//
//
//
//
//
//
//
//
//
//
//	}
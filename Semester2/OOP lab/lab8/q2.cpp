#include <iostream>
#include<string>

using namespace std;
class Ingrident_Details
{
public:
 Ingrident_Details(string,double);
 ~Ingrident_Details();
 string GetName();
 double GetQuantity();
 void SetName();
 void SetQuantity();
private:
 string name;
 double quantity;

};

Ingrident_Details::Ingrident_Details(string n="",double q=0)
{
 name = n;
 quantity = q;
}

string Ingrident_Details::GetName()
{
 return name;
}

double Ingrident_Details::GetQuantity()
{
 return quantity;
}

void Ingrident_Details::SetName()
{
 cout << "Enter Name of Ingrident" << endl;
 cin >> name;
}

void Ingrident_Details::SetQuantity()
{
 cout << "Enter Quantity of Ingrident" << endl;
 cin >> quantity;
}

Ingrident_Details::~Ingrident_Details()
{
 cout << "CLASS INGRIDENTS HAS BEEN DESTROYED" << endl;

}

///////////////////////////////////////////////////////////////

class Instruction_Steps
{
public:
 Instruction_Steps(int,string);
 ~Instruction_Steps();
 int GetStep();
 string GetText();
 void SetStep();
 void SetText();
private:
 int step;
 string text;
};

Instruction_Steps::Instruction_Steps(int s = 0,string t="")
{
 step = s;
 text = t;
}

int Instruction_Steps::GetStep() {
 return step;

}
string Instruction_Steps::GetText() {
 return text;
}
void Instruction_Steps::SetStep() {
 cout << "Enter Instruction Step No" << endl;
 cin >> step;

}
void Instruction_Steps::SetText() {
 cout << "Enter the Instruction Text" << endl;
 cin.ignore();
 getline(cin, text);
}

Instruction_Steps::~Instruction_Steps()
{
 cout << "CLASS INSTRUCTION HAS BEEN DESTROYED" << endl;

}


////////////////////////////////////////////////////////////////

class Recipie_of_product
{
public:
 Recipie_of_product(string);
 ~Recipie_of_product();
 string GetName();
 Ingrident_Details* GetIng();
 Instruction_Steps* GetIns();
 void SetName();
 void SetIng(const int);
 void SetIns(const int);
 void Print(int,int);

private:

 string pname;
 Ingrident_Details * inglist;
 Instruction_Steps* inssteps;
};

Recipie_of_product::Recipie_of_product(string pn="")
{
 pname = pn;
 inglist = nullptr;
 inssteps = nullptr;
}


string Recipie_of_product::GetName() {
 return pname;
}

Ingrident_Details* Recipie_of_product::GetIng() {
 return inglist;
}

Instruction_Steps* Recipie_of_product::GetIns() {
 return inssteps;
}

void Recipie_of_product::SetName() {
 cout << "Enter the name of product" << endl;
 getline(cin, pname);
}

void Recipie_of_product::SetIng(const int ig) {
 inglist = new Ingrident_Details[ig];
 for (int i = 0; i < ig; i++) {
 inglist[i].SetName();
 inglist[i].SetQuantity();
 }

}

void Recipie_of_product::SetIns(const int is) {
 inssteps = new Instruction_Steps[is];
 for (int i = 0; i < is; i++) {
 inssteps[i].SetStep();
 inssteps[i].SetText();
 }
}

void Recipie_of_product::Print(int ig,int is) {
 cout << pname << endl;
 cout << "Ingridents" << endl;
 for (int i = 0; i < ig; i++) {
 cout << inglist[i].GetName() << "\t\t" << inglist[i].GetQuantity() << endl;
 }
 cout << endl;
 cout << "Instructions" << endl;
 for (int i = 0; i < is; i++) {
 cout << inssteps[i].GetStep() << "\t" << inssteps[i].GetText() << endl;
 }


}

Recipie_of_product::~Recipie_of_product()
{
 cout<< "CLASS RECIPIE HAS BEEN DESTROYED" << endl;
 if (inglist != nullptr) {
 delete[] inglist;
 }

 if (inssteps != nullptr) {
 delete[] inssteps;
 }
}

int main() {
 int ingsize, inssize;
 Recipie_of_product r1;
 r1.SetName();
 cout << "How many Ingridents Are Required" << endl;
 cin >> ingsize;
 r1.SetIng(ingsize);
 cout << "How many Instruction Are Required" << endl;
 cin >> inssize;
 r1.SetIns(inssize);
 cout << endl << endl;
 r1.Print(ingsize,inssize);
}
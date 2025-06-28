#include<iostream>
#include<string>
using namespace std;

int stringLength(char* str)
{
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		j++;


	}

	return j;

}

void tokenize(char* str,char deli, int& s) 
{
	int* col = new int[100];
	int r = 0;
	for (int i = 0; i < s; i++)
	{
		if (*(str + i) == deli)
		{

			r++;
		}
	}
	
	//char**TokenizeString = new char*[r];
	
	
	int c = 0, t=0;
	for (int j = 0; j < s; j++)
	{
		if (str[j] != deli)
		{
			c++;
		}
		else 
		{
			col[t]=c;
			t++;
			c = 0;
		}


	}

	char** TokenizeString = new char* [r];
	for (int i = 0; i < r; i++)
	{
		int l = *(col + i);
		*(TokenizeString + i) =  new char[l];
	}
	static int  n = 0;
	for (int i = 0; i < r; i++)
	{
		int m = *(col + i);
		for (int j = 0; j < m; j++)
		{
			if (str[n] != deli)
			{
				*(*(TokenizeString + i) + j) = str[n];
				cout << *(*(TokenizeString + i) + j);
				n++;
			}
			else
			{
				*(*(TokenizeString + i) + j) = '\0';
				n++;
				
			}

		}


	}
	for (int i = 0; i <=r; i++)
	{
		int n = *(col + i);
		for (int j = 0; j <=n; j++)
		{
			cout << *(*(TokenizeString + i) + j)<< endl;
		}

		

	}
	
}
int main()
{
	int s = 40;
	char* str = new char[s];
	cout << "input string=";
	cin.getline(str, s);
	char deli;
	
	cout << endl<<"enter delimeter:";
	cin >>deli;
	cin.ignore();
	//cin.getline(deli, 1);
	s = stringLength(str);
	
	tokenize(str, deli,s);





}
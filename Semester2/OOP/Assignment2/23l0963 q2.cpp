#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void stringConcatenate(char* str1, char* str2)
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = str1[i];
    }
    str1[i] = ' ';
    i++;
    for (int j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

}

char** stringTokens(char* str, int& count)
{
    char** arr = new char* [60];
    int i = 0;
    int k = 0;
    int start = 0, end;
    char emp = ' ';
    int temp = 1;
    for (; *(str + i) != '\0'; ++i)
    {
        while (*(str + i) == emp || *(str + i - 1) == '?' || *(str + i - 1) == '.' || *(str + i - 1) == ',')
        {
            i++;
        }
        if (*(str + i - 1) == emp || *(str + i - 1) == '?' || *(str + i - 1) == '.' || *(str + i - 1) == ',')
        {
            start = i;
        }
        if (*(str + i + 1) == emp || *(str + i + 1) == '\0' || *(str + i + 1) == '?' || *(str + i + 1) == '.' || *(str + i + 1) == ',')
        {
            if (temp != start)
            {
                end = i;
                temp = start;
                int gross = end - start + 1;
                arr[k] = new char[gross];
                for (int j = 0, l = start; l <= end; l++, j++)
                {
                    arr[k][j] = str[l]; //((arr + k) + j) = *(str + l);
                }
                *(*(arr + k) + gross) = '\0';
                k++;
            }
        }
    }
    return arr;
}

void reverseString(char* start, char* end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

char* reverseSentence(char* s)
{
    char* word_begin = s;
    char* temp = s;

    while (*temp)
    {
        temp++;
        if (*temp == '\0')
        {
            reverseString(word_begin, temp - 1);
        }
        else if (*temp == ' ')
        {
            reverseString(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverseString(s, temp - 1);
    return s;
}

char** inverseStringTokens(char* str, const int& uni)
{
    char** arr = new char* [uni];
    int i = strlen(str);
    int k = 0;
    int start = 0, end = strlen(str);
    char emp = ' ';
    int temp = 1;
    for (; i >= 0; --i)
    {
        while (*(str + i) == emp || *(str + i - 1) == '?' || *(str + i - 1) == '.' || *(str + i - 1) == ',')
        {
            i++;
        }
        if (*(str + i - 1) == emp || *(str + i - 1) == '?' || *(str + i - 1) == '.' || *(str + i - 1) == ',')
        {
            start = i;
        }
        if (*(str + i + 1) == emp || *(str + i + 1) == '\0' || *(str + i + 1) == '?' || *(str + i + 1) == '.' || *(str + i + 1) == ',')
        {
            if (temp != start)
            {
                start = i;
                temp = start;
                int gross = end - start + 1;
                arr[k] = new char[gross];
                for (int j = 0, l = start; l <= end; l++, j++)
                {
                    arr[k][j] = str[l]; //((arr + k) + j) = *(str + l);
                }
                *(*(arr + k) + gross) = '\0';
                k++;
            }
        }
    }
    return arr;
}

void displayStringList(char** list, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << list[i] << endl;
    }
}

int CompareString(char* a, char* b)
{
    int i = 0;
    while (a[i] == b[i])
    {
        if (a[i] == '\0' || b[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
    {
        return 0;
    }
    else
    {
        return a[i] - b[i];
    }
}

void bubbleSort(char** list, int count)
{
    char* temp;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (CompareString(list[i], list[j]) > 0)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void tokenOutput(char** arr, int ch)
{
    for (int i = 0; i < ch; i++)
    {
        for (int j = 0; *(*(arr + i) + j) != '\0'; ++j)
        {
            cout << ((arr + i) + j);
        }
        cout << endl;
    }
}

int main()
{

char* str1 = 0, * str2 = 0;
const int SIZE = 100;

str1 = new char[SIZE];
str2 = new char[SIZE];

cout << "Enter the first string: ";
cin.getline(str1, SIZE);

cout << "Enter the second string: ";
cin.getline(str2, SIZE);

stringConcatenate(str1, str2);
delete[] str2;
str2 = nullptr;
cout << "The concatenated string is :\t" << str1 << "\n";
int count = 0;

char** tok = stringTokens(str1, count);
char** rev = inverseStringTokens(str1, count);
char* ult = reverseSentence(str1);

cout << "Reversed string is:\t" << ult << "\n";

delete[] ult;
ult = nullptr;

delete[] str1;
str1 = nullptr;

for (int i = 0; i < count; i++)
{
    delete[] tok[i];
}
delete[] tok;
tok = nullptr;

for (int i = 0; i < count; i++)
{
    delete[] rev[i];
}
delete[] rev;
rev = nullptr;

cout << "\n From here starts that student question \n";

ifstream file("data.txt");
if (!file) {
    cout << "File not found\n";
    return 1;
}

int count;
file >> count;
file.ignore();

char** studentList = new char* [count];

for (int i = 0; i < count; i++)
{
    studentList[i] = new char[256];
    file.getline(studentList[i], 256);
}

cout << "\nBefore Sorting:\n";
displayStringList(studentList, count);

bubbleSort(studentList, count);

cout << "\nAfter Sorting:\n";
displayStringList(studentList, count);

for (int i = 0; i < count; i++)
{
    delete[] studentList[i];
}
delete[] studentList;
studentList = nullptr;
file.close();
return 0;
}
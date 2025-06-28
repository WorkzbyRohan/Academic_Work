#include <iostream>
#include <cstring>
using namespace std;
class StringArray {
private:
	char** strings;
	int size;

public:
	StringArray(int arraySize)
	{
		// Constructor to initialize the StringArray with a given size
		size = arraySize;
		strings = new char*[size];
		for (int i = 0; i < size; i++)
		{
			strings[i] = nullptr;
		}
	}
	~StringArray() {
		// Destructor to free the dynamically allocated memory
		for (int i = 0; i < size; i++)
		{
			delete[]strings;
		}
		delete[] strings;
	}
	void setString(int index, const char* str) {
		// Method to set a string at a specific index
		int x = strlen(str);
		strings[index] = new char[x + 1];
		for(int i=0;i<x;i++)
		{
			strings[index][i] = str[i];
		}
		strings[index][x] = '\0';
	}
	const char* getString(int index) {
		return strings[index];
	}
};
int main() {
	StringArray stringArray(3);
	stringArray.setString(0, "Hello");
	std::cout << "String at index 0: " << stringArray.getString(0) <<
		std::endl;
	return 0;
}
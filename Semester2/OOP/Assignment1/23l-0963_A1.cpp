#include <iostream>

using namespace std;



void InputArray(char* input, int& size)
{
    cout << "Enter a sentence: ";
    cin.getline(input, size);
}
int strcmp(const char* str1, const char* str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
char* tokenize(char* input, int& i)
{
    int k = 0;
    char* word = new char[50]; 
    while (input[i] != ' ' && input[i] != '\0' && input[i] != '.' && input[i] != ',' && input[i] != '?')
    {
        word[k] = input[i];
        k++;
        i++;
    }
    word[k] = '\0';
    return word;
}
void synonmy(char**& keywords, char* input, int& s)
{
    int n = 0;
    for (int i = 0; i < s && input[i] != '\0'; i++)
    {
        if (input[i] != ' ' && input[i] != ',' && input[i] != '.' && input[i] != '?')
        {
            keywords[n] = tokenize(input, i);
            n++;
        }
    }

    char*** synonyms = new char**[n];
    for (int i = 0; i < n; i++)
    {
        synonyms[i] = new char*[1];
        synonyms[i][0] = nullptr; 
    }

    int m = 0;
    for (int i = 0; i < n; i++)
    {
        bool U = true;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(keywords[i], keywords[j]) == 0)
            {
                U = false;
                
                break;
            }
        }
        
        if (U)
           {
            cout << keywords[i] << endl;
             
           m++;
             
            char choice;
            cout << "Do you want to store synonyms for \"" << keywords[i] << "\"? (Y/N): ";
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
            {
                cout << "How many synonyms do you want to store for \"" << keywords[i] << "\"? : ";
                int synonymCount;
                cin >> synonymCount;
                cin.ignore();
                synonyms[i] = new char*[synonymCount];
                for (int j = 0; j < synonymCount; j++)
                {
                    synonyms[i][j] = new char[50];
                    cout << "Enter synonym " << j + 1 << " : ";
                    cin.getline(synonyms[i][j], 50);
                }
                cout << "Synonyms stored successfully!" << endl;
            }
        }
    }
      
    
    for (int i = 0; i < n; i++)
    {
        if (synonyms[i][0] != nullptr)
        {
            cout << "Synonyms for " << keywords[i] << ": ";
            for (int j = 0; synonyms[i][j] != nullptr; j++)
            {
                cout << synonyms[i][j] << " ";
            }
            cout << endl;
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        if (synonyms[i][0] != nullptr)
        {
            for (int j = 0; synonyms[i][j] != nullptr; j++)
            {
                delete[] synonyms[i][j];
            }
            delete[] synonyms[i];
        }
    }
    delete[] synonyms;

    
    for (int i = 0; i < s; i++)
    {
        delete[] keywords[i];
    }
}

void cf(char**& keywords, char* input, int& s)
{
    int n = 0;
    for (int i = 0; i < s && input[i] != '\0'; i++)
    {
        if (input[i] != ' ' && input[i] != ',' && input[i] != '.' && input[i] != '?')
        {
            keywords[n] = tokenize(input, i);
            n++;
        }
    }

    char*** synonyms = new char**[n]; 
    for (int i = 0; i < n; i++)
    {
        synonyms[i] = new char*[1]; 
        synonyms[i][0] = nullptr;
    }

    int m = 0;
    for (int i = 0; i < n; i++)
    {
        bool U = true;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(keywords[i], keywords[j]) == 0)
            {
                U = false;
                
                break;
            }
        }
        
        if (U)
           {
            cout << keywords[i] << endl;
             
           m++;
           }
    }
    cout<<"unique words="<<m<<endl;
}

int main()
{
    int s = 3000;
    char* input = new char[s];
    char** keywords = new char*[s];
    for (int i = 0; i < s; i++)
    {
        keywords[i] = new char[50];
    }
    InputArray(input, s);
    cf(keywords, input, s);
    synonmy( keywords,  input,  s);

    delete[] input;
    delete[] keywords;

    return 0;
}

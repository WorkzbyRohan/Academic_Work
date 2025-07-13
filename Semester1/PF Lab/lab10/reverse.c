#include<iostream>
using namespace std;

void reverseWords(char arr[]) {
    int start = 0;
    int end = 0;

    while (arr[end] != '\0') {
        while (arr[end] != ' ' && arr[end] != '\0') {
            end++;
        }

        int i = start, j = end - 1;
        while (i < j) {
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        if (arr[end] == ' ') {
            end++;
            start = end;
        }
    }

    cout << arr;
}

int main() {
    int choice = 0;

    char p1[] = "This is first paragraph with no space at start and no space at end";
    char p2[] = " This is first paragraph with one space at start and no space at end";
    char p3[] = " This is first paragraph with one space at start and one space at end ";
    char p4[] = " this is a sparse paragraph ";
    char p5[] = " it is multiline paragraph \n second line of paragraph ";

    cout << "Enter your paragraph choice: ";
    cin >> choice;

    if (choice == 1) {
        reverseWords(p1);
    } else if (choice == 2) {
        reverseWords(p2);
    } else if (choice == 3) {
        reverseWords(p3);
    } else {
        reverseWords(p4);
    }

    return 0;
}
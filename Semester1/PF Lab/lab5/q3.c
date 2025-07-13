#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Your grade is A";
    } 
    else if (marks >= 80 && marks <= 89) {
        cout << "Your grade is B";
    } 
    else if (marks >= 70 && marks <= 79) {
        cout << "Your grade is C";
    } 
    else if (marks >= 60 && marks <= 69) {
        cout << "Your grade is D";
    } 
    else if (marks >= 40 && marks <= 59) {
        cout << "Your grade is E";
    } 
    else {
        cout << "Your grade is F";
    }

    return 0;
}

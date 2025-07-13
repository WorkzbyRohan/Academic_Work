#include<iostream>
using namespace std;

int main()
{
    int cost, rooms, days, tax;
    float cost1 = 0, cost2 = 0, totalcost;

    
    cout << "Enter the cost of one room = ";
    cin >> cost;

    cout << "Enter the number of rooms = ";
    cin >> rooms;

    cout << "Enter the days for which rooms are booked = ";
    cin >> days;

    cout << "Enter the sales tax (%) = ";
    cin >> tax;

    // Applying discounts based on the number of rooms
    if (rooms >= 10 && rooms <= 19) {
        cost1 = cost * rooms * 0.10;
        cout << "Discount on rooms is 10%" << endl;
    }
    else if (rooms >= 20 && rooms <= 29) {
        cost1 = cost * rooms * 0.20;
        cout << "Discount on rooms is 20%" << endl;
    }
    else if (rooms >= 30) {
        cost1 = cost * rooms * 0.30;
        cout << "Discount on rooms is 30%" << endl;
    }

    
    if (days >= 3) {
        cost2 = cost * rooms * 0.05;
        cout << "5% discount is added additionally due to days" << endl;
    }

    
    totalcost = (cost * rooms * days) - cost1 - cost2;
    totalcost += totalcost * (tax / 100.0);

    
    cout << "Total cost of rooms = " << totalcost << endl;

    return 0;
}

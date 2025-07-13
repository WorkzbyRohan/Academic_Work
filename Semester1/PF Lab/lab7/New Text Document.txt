#include <iostream>
using namespace std;

int main() {
    int floors;
    cout << "Enter the number of floors: ";
    cin >> floors;

    while (floors < 1) {
        cout << "Number of floors must be at least 1. Enter again: ";
        cin >> floors;
    }

    int totalRooms = 0, totalOccupied = 0;

    for (int i = 1; i <= floors; ++i) {
        if (i == 13) continue;

        int rooms, occupied;
        cout << "Enter the number of rooms on floor " << i << ": ";
        cin >> rooms;

        while (rooms < 1) {
            cout << "Number of rooms must be at least 1. Enter again: ";
            cin >> rooms;
        }

        cout << "Enter the number of occupied rooms on floor " << i << ": ";
        cin >> occupied;

        while (occupied < 0 || occupied > rooms) {
            cout << "Invalid input. Enter again: ";
            cin >> occupied;
        }

        totalRooms += rooms;
        totalOccupied += occupied;
    }

    int totalUnoccupied = totalRooms - totalOccupied;
    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << totalUnoccupied << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}

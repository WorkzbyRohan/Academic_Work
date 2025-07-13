#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int player1_score = 0, player2_score = 0;
    int turn = 1;

    while (true) {
        int roll = rand() % 6 + 1; // Generate a dice roll between 1 and 6

        if (turn % 2 != 0) {
            cout << "Player 1's turn: " << roll << endl;
            player1_score += roll;

            if (player1_score == 20) {
                cout << "Player 1 won!" << endl;
                break;
            } else if (player1_score > 20) {
                cout << "Player 1 value is discarded." << endl;
                player1_score -= roll;
            }
        } else {
            cout << "Player 2's turn: " << roll << endl;
            player2_score += roll;

            if (player2_score == 20) {
                cout << "Player 2 won!" << endl;
                break;
            } else if (player2_score > 20) {
                cout << "Player 2 value is discarded." << endl;
                player2_score -= roll;
            }
        }

        turn++;
    }

    return 0;
}

#include <iostream>
#include <time.h>

using namespace std;


class Dice {
private:
    int value;
public:
    Dice() {
        value = 0;
    }

    void roll() {
        value = (rand() % 6) + 1;     /// to create the random number.
    }

    int getValue() {
        return value;
    }
};

int main() {
    srand(time(0));
    cout << "----------------------------Welcome to the Game -----------------\n";

    int playerTotal = 0;
    int computerTotal = 0;

    while (true) {
       cout << "\n--- round started ---\n";

        Dice Die1;
        Dice Die2;
        Die1.roll();
        Die2.roll();
        computerTotal =Die1.getValue() + Die2.getValue();

        cout << "Computer rolled the dice.\n";
        cout << "Player total: " << playerTotal << endl;

        if (playerTotal > 21) {
            break;
        }

        char choice;
        cout << "Do you want to roll the dice? (y/n): ";
        cin >> choice;

        if (tolower(choice) == 'y') {
            Dice player;
            Dice player1;
            player.roll();
            player1.roll();
            playerTotal += player.getValue() + player1.getValue();
        } else {
            break;
        }
    }

    cout << "\n--- Game Over ---\n";
    cout << "Computer total: " << computerTotal << endl;
    cout << "Player total: " << playerTotal << endl;

    if (playerTotal > 21) {
        cout << "Player loses! Computer wins.\n";
    } else if (computerTotal > 21) {
        cout << "Computer loses! Player wins.\n";
    } else if (playerTotal > computerTotal) {
        cout << "Player wins!\n";
    } else if (playerTotal < computerTotal) {
        cout << "Computer wins!\n";
    } else {
        cout << "It's a tie!\n";
    }
}


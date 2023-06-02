#include <iostream>
#include <ctime>
using namespace std;
void moveTortoise(int& tortoisePosition) {
    int move = rand() % 10 + 1;  // Generate a random number from 1 to 10

    if (move >= 1 && move <= 5) {  // Fast plod - 50% chance
        tortoisePosition += 3;
    } else if (move >= 6 && move <= 7) {  // Slip - 20% chance
        tortoisePosition -= 6;
        if (tortoisePosition < 1) {
            tortoisePosition = 1;
        }
    } else {  // Slow plod - 30% chance
        tortoisePosition += 1;
    }
}

void moveHare(int& harePosition) {
    int move =rand() % 10 + 1;  // Generate a random number from 1 to 10

    if (move >= 1 && move <= 2) {  // Sleep - 20% chance
        // No movement
    } else if (move >= 3 && move <= 4) {  // Big hop - 20% chance
        harePosition += 9;
    } else if (move == 5) {  // Big slip - 10% chance
        harePosition -= 12;
        if (harePosition < 1) {
            harePosition = 1;
        }
    } else if (move >= 6 && move <= 8) {  // Small hop - 30% chance
        harePosition += 1;
    } else {  // Small slip - 20% chance
        harePosition -= 2;
        if (harePosition < 1) {
            harePosition = 1;
        }
    }
}

void displayRace(const int& tortoisePosition, const int& harePosition) {
    for (int i = 1; i <= 70; ++i) {
        if (i == tortoisePosition && i == harePosition) {
            cout << "start";  // Both animals at the same position
        } else if (i == tortoisePosition) {
            cout << "T";  // Tortoise
        } else if (i == harePosition) {
            cout << "H";  // Hare
        } else {
            cout << ".";  // Empty position
        }
    }
    cout <<endl;
}

int main() {
    srand(std::time(0));  // Seed the random number generator with the current time
    

    int tortoisePosition = 1;
    int harePosition = 1;
    int clockTicks = 0;

    cout << "\t\t{start race}" << endl;
    cout<<"--------------------------------"<<endl;
    cout << "|And the race begins : |" << endl;
    cout<<"--------------------------------"<<endl;

    while (tortoisePosition < 70 && harePosition < 70) {
        moveTortoise(tortoisePosition);
        moveHare(harePosition);
        displayRace(tortoisePosition, harePosition);
        ++clockTicks;
    }

    if (tortoisePosition >= 70 && harePosition >= 70) {
        cout << "Tie :)" << endl;
    } else if (tortoisePosition >= 70) {
        cout << "Tortise won the race :" << endl;
    } else {
        cout << "Hare wins. Yuch." << endl;
        cout<<
    }

    cout << "TIME ELAPSED = " << clockTicks << " seconds" << endl;

}



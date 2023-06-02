#include <iostream>
#include <ctime>
using namespace std;

// Function to generate a random number
int Function_random_nr() {
    return rand() % 10 + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    
	cout << "Lets Start Race..." << endl;
	
    int pos_of_tortoise = 1; 
    int pos_of_hare = 1; 
    
    while (pos_of_tortoise < 70 && pos_of_hare < 70) {
        int tortise_step = Function_random_nr(); // Random move for the tortoise
        int hare_step = Function_random_nr(); // Random move for the hare

        // Adjust the positions of the tortoise and hare based on their moves
        if(tortise_step >= 1 && tortise_step <= 5){
            pos_of_tortoise += 3; // Fast plod - move 3 squares to the right
        } 
		else if(tortise_step >= 6 && tortise_step <= 7){
            pos_of_tortoise -= 6; // Slip - move 6 squares to the left
        }
		else{
            pos_of_tortoise += 1; // Slow plod - move 1 square to the right
        }
        
        
        
        if(hare_step >= 1 && hare_step <= 2){
            pos_of_hare += 9; // Big hop - move 9 squares to the right
        } 
		else if(hare_step >= 3 && hare_step <= 4) {
            pos_of_hare -= 12; // Big slip - move 12 squares to the left
        } 
		else if(hare_step >= 5 && hare_step <= 8) {
            pos_of_hare += 1; // Small hop - move 1 square to the right
        } 
		else{
            pos_of_hare -= 2; // Small slip - move 2 squares to the left
        }

        // Ensure that the positions are within the valid range
        if (pos_of_tortoise < 1) {
            pos_of_tortoise = 1;
        }
        if (pos_of_hare < 1) {
            pos_of_hare = 1;
        }

        // Display the current positions of the tortoise and hare
        for (int i = 1; i <= 70; i++) {
            if (i == pos_of_tortoise && i == pos_of_hare) {
                cout << "boom :/";
            } else if (i == pos_of_tortoise) {
                cout << "Turtle";
            } else if (i == pos_of_hare) {
                cout << "Hare";
            } else {
                cout << "-";
            }
        }
        cout << endl; // for organizing display
    }

    // Determine the winner and display the result
    if (pos_of_tortoise >= 70 && pos_of_hare >= 70) {
        cout << "Race is a Draw" << endl;
    } else if (pos_of_tortoise >= 70) {
        cout << "Tortoise WINS.." << endl;
    } else {
        cout << "Hare WINS..." << endl;
    }

    return 0;
}







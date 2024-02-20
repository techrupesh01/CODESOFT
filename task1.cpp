#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {


    srand(time(0)); // Seed the random number generator

    int randNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    
    int guess, attempts = 0;

    cout << "Welcome to the Guess the Number game" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your number: ";
        cin >> guess;
        attempts++;

        if (guess == randNumber) {
            cout << "Congratulations! You guessed the number " << randNumber << " in " << attempts << " attempts." << endl;
            break;
        }
        else {
            if (guess > randNumber) {
                cout << "Large number! ";
            } 
            else {
                cout << "Small number! ";
            }
            cout << "Try again. " << endl;
        }
    }

    return 0;
}

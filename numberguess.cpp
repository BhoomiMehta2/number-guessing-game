#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string name;
    char playAgain;

    cout << "Enter your name: ";
    cin >> name;

    do {
        srand(time(0));  // Seed for random number (placed here for true randomness)
        int secretNumber = rand() % 60 + 1;
        int guess;
        int attempts = 0;

        cout << "\n🎮 Welcome " << name << " to the Number Guessing Game!" << endl;

        do {
            cout << "Enter your guess (1 to 60): ";
            cin >> guess;
            attempts++;

            if (guess < secretNumber) {
                cout << "Too low! Try again. 🔻" << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again. 🔺" << endl;
            } else {
                cout << "🎉 Congratulations " << name << "! You guessed it in " << attempts << " attempts!" << endl;
            }

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing, " << name << "! See you next time 👋" << endl;
    return 0;
}

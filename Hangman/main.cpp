#include <iostream>
#include <vector>
#include <time.h>

#include "Hangman.h"

using namespace std;

int main() {
    int winCondition=false;
    srand(time(0));
    Hangman hangmanGame;

    cout << "Welcome the the Greatest Game Ever!" << endl << "\tThe goal of this game is to guess a random word correctly" << endl << endl;

    cout << "Generating random word" << endl << "Your word has been generated" << endl;

    hangmanGame.PickWord(rand()%10);
    hangmanGame.PrintLetters();

    while(winCondition==false) {
        hangmanGame.UserGuess();
        if (hangmanGame.CheckForWin() == true) {
            cout << "Congratulations! You have successfully guessed the word!" << endl << "You guessed ";
            hangmanGame.PrintTotalGuesses();
            cout << " times" << endl << endl;

            cout << "to play again enter a, to quit enter any other letter: ";
            char exit;
            cin >> exit;
            if (exit!='a') {
                winCondition = true;
            }
            cout << endl << endl << "Welcome Back!" << endl;
            hangmanGame.PickWord(rand()%10);
            hangmanGame.PrintLetters();
        }
    }



    return 0;
}

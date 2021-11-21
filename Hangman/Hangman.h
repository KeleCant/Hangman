#ifndef HANGMAN_HANGMAN_H
#define HANGMAN_HANGMAN_H
#include <string>
#include <vector>

using namespace std;

class Hangman {
    public:
        void PickWord(int);
        void PrintLetters();
        void UserGuess();
        bool CheckForWin();
        void PrintTotalGuesses();

    private:

        int correctGuesses=0;
        int incorrectGuesses=0;

        string currentWord="none";
        string displayWord="none";
        vector<char> incorrectLetters;
};


#endif //HANGMAN_HANGMAN_H

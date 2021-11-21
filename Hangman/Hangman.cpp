#include "Hangman.h"
#include <iostream>

using namespace std;

void Hangman::PickWord(int randNumber){
    if (randNumber == 0) {
        currentWord = "fox";
        displayWord = "___";
    }
    if (randNumber == 1){
        currentWord="tail";
        displayWord = "____";
    }
    if (randNumber == 2){
        currentWord="rythm";
        displayWord = "_____";
    }
    if (randNumber == 3){
        currentWord="active";
        displayWord = "______";
    }
    if (randNumber == 4){
        currentWord="kumquat";
        displayWord = "_______";
    }
    if (randNumber == 5){
        currentWord="squirrel";
        displayWord = "________";
    }
    if (randNumber == 6){
        currentWord="kickboard";
        displayWord = "_________";
    }
    if (randNumber == 7){
        currentWord="strawberry";
        displayWord = "__________";
    }
    if (randNumber == 8){
        currentWord="marshmallow";
        displayWord = "___________";
    }
    if (randNumber == 9){
        currentWord="thanksgiving";
        displayWord = "____________";
    }
}

void Hangman::PrintLetters(){
    cout << "Your word has " << currentWord.size() << " letters" << endl;

}

void Hangman::UserGuess(){
    char userChar;
    int correctGuessesPlaceHolder=correctGuesses;

    cout << "Guess a letter: ";
    cin >> userChar;
    cout << endl;

    for (int i=0; i< currentWord.size(); i++){
        if (userChar == currentWord.at(i)){
            displayWord.at(i)=currentWord.at(i);
            correctGuesses+=1;
        }
    }
    if (correctGuesses!=correctGuessesPlaceHolder){
        correctGuessesPlaceHolder+=1;
        if (correctGuesses!=correctGuessesPlaceHolder) {
            correctGuesses = correctGuessesPlaceHolder;
        }
        cout << displayWord << endl;
    }
    else{
        incorrectGuesses+=1;
        cout << "Sorry that is not a letter in this word" << endl << "you have guessed: ";
        incorrectLetters.push_back(userChar);
        for (int i=0; i<incorrectLetters.size(); i++){
            cout << incorrectLetters.at(i) << " ";
        }
        cout << endl;
    }

    //display total guesses
    cout <<"Your guesses" << endl<< "Total: " << incorrectGuesses+correctGuesses << endl << "Correct: " << correctGuesses<< endl << "Incorrect: " << incorrectGuesses << endl << endl;

}

bool Hangman::CheckForWin(){
    if (currentWord==displayWord){
        return 1;
    }
    else{
        return 0;
    }


}

void Hangman::PrintTotalGuesses(){
    cout << correctGuesses+incorrectGuesses;
}
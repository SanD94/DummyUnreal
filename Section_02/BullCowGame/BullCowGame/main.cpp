//
//  main.cpp
//  BullCowGame
//
//  Created by Safa Andac on 25.04.2019.
//  Copyright © 2019 Safa Andac. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();



// entry point for our application
int main(int argc, const char * argv[]) {
    // insert code here...
    do {
        PrintIntro();
        PlayGame();
    } while (AskToPlayAgain());
    
    return 0; // exit the application
}

// introduce the game
void PrintIntro() {
    constexpr int WORD_LENGTH = 6;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

// get a guess from the player
string GetGuess() {

    cout << "Enter your guess : ";
    string Guess;
    getline(cin, Guess);
    return Guess;
}

void PlayGame() {
    constexpr int NUMBER_OF_TURNS = 5;
    for (int i=0; i<NUMBER_OF_TURNS; i++) {
        string Guess = GetGuess();
        cout << "Your guess was : " << GetGuess() << endl;
        cout << endl;
    }
}

bool AskToPlayAgain() {
    cout << "Do you want to play again (y/n)?";
    string Response;
    getline(cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

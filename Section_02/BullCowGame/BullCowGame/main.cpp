//
//  main.cpp
//  BullCowGame
//
//  Created by Safa Andac on 25.04.2019.
//  Copyright © 2019 Safa Andac. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;


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
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

// get a guess from the player
std::string GetGuess() {
    int CurrentTry = BCGame.GetCurrentTry();
    
    std::cout << "Try " << CurrentTry << ". Enter your guess : ";
    std::string Guess;
    getline(std::cin, Guess);
    return Guess;
}

void PlayGame() {
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();
    
    for (int i=0; i<MaxTries; i++) {
        std::string Guess = GetGuess();
        std::cout << "Your guess was : " << GetGuess() << std::endl;
        std::cout << std::endl;
    }
}

bool AskToPlayAgain() {
    std::cout << "Do you want to play again (y/n)?";
    std::string Response;
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

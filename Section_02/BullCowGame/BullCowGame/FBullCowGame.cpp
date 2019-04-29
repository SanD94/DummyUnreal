//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Safa Andac on 25.04.2019.
//  Copyright © 2019 Safa Andac. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() {
    Reset();
}

bool FBullCowGame::IsIsogram(std::string) { 
    return false;
}


bool FBullCowGame::CheckGuessValidity(std::string) { 
    return false;
}


bool FBullCowGame::IsGameWon() const { 
    return false;
}


int FBullCowGame::GetCurrentTry() const {
    return CurrentTry;
}


int FBullCowGame::GetMaxTries() const { 
    return MaxTries;
}


void FBullCowGame::Reset() {
    constexpr int MAX_TRIES = 8;
    
    CurrentTry = 1;
    MaxTries = MAX_TRIES;
}




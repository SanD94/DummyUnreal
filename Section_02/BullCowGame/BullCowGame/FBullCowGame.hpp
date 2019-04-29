//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Safa Andac on 25.04.2019.
//  Copyright © 2019 Safa Andac. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <string>

class FBullCowGame {
public:
    FBullCowGame();
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO: Make a more rich return value
    bool CheckGuessValidity(std::string);
    
    
private:
    // see constructor for initialization
    int CurrentTry;
    int MaxTries;
    bool IsIsogram(std::string);
};

#endif /* FBullCowGame_hpp */

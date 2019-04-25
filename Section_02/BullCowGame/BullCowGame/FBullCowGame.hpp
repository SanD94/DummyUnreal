//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Safa Andac on 25.04.2019.
//  Copyright © 2019 Safa Andac. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <iostream>

class FBullCowGame {
public:
    void Reset(); // TODO: Make a more rich return value
    int GetMaxTries();
    
private:
    int CurrentTry;
    int MaxTries;
    bool IsIsogram(std::string);
};

#endif /* FBullCowGame_hpp */

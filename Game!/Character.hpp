//
//  Character.hpp
//  Game!
//
//  Created by Sophia Nguyen on 2016-05-11.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Character{
    
public:
    //Default Constructor: sets member variables to empty state
    Character();
    
    //Overload Constructor
    Character(string, int);
    
    //Destructor
    ~Character();
    
    //Accessor Functions
    string getName() const;
        // getName - returns name of character
    
    int getAge() const;
        //getAge - returns age of character
    
    //Mutator Functions
    void setName(string);
        // setName - sets name of character
        // @param string -  name of the character
    
    void setAge(int);
        // setAge - sets age of character
        // @param int - age of character
    
    
    
private:
    //Member variables
    string newName;
    int newAge;
    
    
};

#endif /* Character_hpp */

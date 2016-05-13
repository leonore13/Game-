//
//  Character.cpp
//  Game!
//
//  Created by Sophia Nguyen on 2016-05-11.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//
//  The profile of the character

#include "Character.hpp"

Character::Character() {
    newName = "";
    newAge = 0;
    
}

Character::Character(string name, int age) {
    newName = name;
    newAge = age;
    
}

Character::~Character(){
    
}

string Character::getName() const {
    return newName;
}

int Character::getAge() const {
    return newAge;
}

void Character::setName(string name) {
    newName = name;
}

void Character::setAge(int age) {
    newAge = age;
}
